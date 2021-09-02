#include "Connection.h"

// convert string to tm structure
bool str2time(char * str, struct tm * time) {
    int year = 0, month = 0, day = 0, hour = 0, minute = 0, sec = 0;
    memset (time, 0, sizeof (struct tm));
    if(sscanf(str, "%4d-%2d-%2d %2d:%2d:%2d",
         &year, &month, &day, &hour, &minute, &sec) != 6) {
        return false;
    }
    time->tm_year = year - 1900;
    time->tm_mon = month - 1;
    time->tm_mday = day;
    time->tm_hour = hour;
    time->tm_min = minute;
    time->tm_sec = sec;
    return true;
}
// convert tm structure to string
char* time2str(struct tm * time, char * str) {
    memset(str, 0, strlen(str));
    time->tm_year += 1900;
    time->tm_mon += 1;

    sprintf(str,"%04d-%02d-%02d %02d:%02d:%02d",
            time->tm_year, time->tm_mon, time->tm_mday,time->tm_hour,time->tm_min,time->tm_sec);
    return str;
}

void Connection::ParsePack()
{
    TransPack pack;
    while (1)
    {
        if (!sock.isConnected())
        {
            emit Receiving_State(-1);
            break;
        }
        if (sock.get(pack) == -1){
            Sleep(100);
            continue;
        }

        qDebug()<<"pack id"<<pack.id<<pack.msg;
        switch (pack.id)
        {
        case D_ME:
        {
            int user_id = pack.recver;
            QString username(pack.msg);
            if (username.length() > 0)
            {
                User me(user_id, username);
                emit BuildUser(me);
            }
            else
            {
                User me(user_id, "");
                emit BuildUser(me);
            }

            break;
        }
        case D_FRIEND:
        {
            int friend_id = 0;
            char* friend_id_str;

            friend_id_str = strtok(pack.msg, "/");
            QString friend_name(strtok(NULL, "/"));
            QString friend_nickname(strtok(NULL, "/"));
            // atoi():
            friend_id = atoi(friend_id_str);

            Friend my_friend(friend_id, friend_name, friend_nickname);
            qDebug()<<"receive friend"<<my_friend.friend_id;
            emit BuildFriend(my_friend);
            break;
        }
        case R_REPLY:
        {
            // check state
            qDebug()<<"----R_reply"<<pack.id;
            emit applicant_fail(pack.sender);
            break;
        }
        case R_UPDATEPWD:
        {
            int state = atoi(pack.msg);
            emit changepwd_state(state);
            break;
        }
        case R_APPLICANT:{
            qDebug()<<"Applicant"<<pack.id<<pack.msg;
            char* request_id_str = strtok(pack.msg,"/");
            int request_id = atoi(request_id_str);
            QString friend_name(strtok(NULL, "/"));

            emit GetApplicant(pack.sender, request_id, friend_name);
            break;
        }
        case D_FILE_PACK:
        {
            // file todo
            break;
        }
        case D_FILE_END:
        {
            // file todo
            break;
        }
        case R_ONOFFLINE:{
            int friend_id = pack.sender;
            int state_code = atoi(pack.msg);
            qDebug()<<"#####"<<friend_id<<state_code;
            emit FrdState(friend_id, state_code);
            break;
        }
        default:
        {
            // record
            if (pack.id > 0 || pack.id == D_WHISPER)
            {
                int record_id = pack.id;
                int from_id = pack.sender;
                int to_id = pack.recver;
                // convert time format
                tm record_datatime;
                int convertion_code = str2time(pack.t, &record_datatime);

                QString msg = QString(pack.msg);
                qDebug()<<"-----"<<record_id<<"receive msg"<<from_id<<to_id<<msg;
                Record my_record(record_id, record_datatime, from_id, to_id, msg);
                emit BuildRecord(my_record);
            }
            break;
        }
        }

    }
}

Connection::Connection(const char *ip, const int port): m_port(port)
{
    strcpy(m_ip, ip);
    int connection_code = sock.connect(ip, port);
    receive_thread = std::thread(&Connection::ParsePack,this);
    receive_thread.detach();
}

void Connection::ReConnection(){
    int connection_code = sock.reconnect(m_ip, m_port);
}

// main.cpp 中 设置  QTextCodec::setCodecForLocale(QTextCodec::codecForName( "UTF-8"));

void Connection::Send_Login(int user_id, QString pwd)
{
    if (!sock.isConnected())
    {
        emit Send_Login_State(-1);
        return;
    }
    TransPack pack;
    memset(pack.msg, 0, sizeof(pack.msg));
    pack.id = R_LOGIN;
    pack.sender = user_id;
    pack.recver = SERVER_IDX;

    std::string str = pwd.toStdString();
    sprintf(pack.msg, "%s", str.c_str());

    time_t t;
    time(&t);
    memset(pack.t, 0, sizeof(pack.t));
    time2str(localtime(&t), pack.t);
//    qDebug()<<"send login"<<pack.sender<<pack.msg;
    int send_code = sock.send(pack);
    if (send_code == -1)
    {
        emit Send_Login_State(-1);
        return;
    }
    emit Send_Login_State(1);
    return;
}
void Connection::Send_Reg(QString username, QString pwd)
{
    if (!sock.isConnected())
    {
        emit Send_Reg_State(-1);
        return;
    }
    TransPack pack;
    memset(pack.msg, 0, sizeof(pack.msg));
    pack.id = R_REGISTER;
    pack.sender = 0; // any number is ok
    pack.recver = SERVER_IDX;

    std::string username_str, pwd_str, msg_str;
    username_str = username.toStdString();
    pwd_str = pwd.toStdString();
    msg_str = username_str + "/" + pwd_str;
    sprintf(pack.msg, "%s", msg_str.c_str());

    time_t t;
    time(&t);
    memset(pack.t, 0, sizeof(pack.t));
    time2str(localtime(&t), pack.t);
    int send_code = sock.send(pack);
    if (send_code == -1)
    {
        emit Send_Reg_State(-1);
        return;
    }
    emit Send_Reg_State(1);
    return;
}
void Connection::Send_ChangePWD(int user_id, QString old_pwd, QString new_pwd)
{
    if (!sock.isConnected())
    {
        emit Send_ChangePWD_State(-1);
        return;
    }
    TransPack pack;
    memset(pack.msg, 0, sizeof(pack.msg));
    pack.id = R_UPDATEPWD;
    pack.sender = user_id;
    pack.recver = SERVER_IDX;

    std::string old_pwd_str, new_pwd_str, msg_str;
    old_pwd_str = old_pwd.toStdString();
    new_pwd_str = new_pwd.toStdString();
    msg_str = old_pwd_str + "/" + new_pwd_str;
    sprintf(pack.msg, "%s", msg_str.c_str());

    time_t t;
    time(&t);
    memset(pack.t, 0, sizeof(pack.t));
    time2str(localtime(&t), pack.t);
    int send_code = sock.send(pack);
    if (send_code == -1)
    {
        emit Send_ChangePWD_State(-1);
        return;
    }
    emit Send_ChangePWD_State(1);
    return;
}
// 给好友改昵称
void Connection::Send_Alias(int user_id, int friend_id, QString nickname)
{
    if (!sock.isConnected())
    {
        emit Send_Alias_State(-1);
        return;
    }
    TransPack pack;
    memset(pack.msg, 0, sizeof(pack.msg));
    pack.id = R_UPDATEALIAS;
    pack.sender = user_id;
    pack.recver = friend_id;

    std::string nickname_str = nickname.toStdString();
    sprintf(pack.msg,"%s", nickname_str.c_str());

    time_t t;
    time(&t);
    memset(pack.t, 0, sizeof(pack.t));
    time2str(localtime(&t), pack.t);
    int send_code = sock.send(pack);
    if (send_code == -1)
    {
        emit Send_Alias_State(-1);
        return;
    }
    emit Send_Alias_State(1);
    return;
}
void Connection::Send_Applicant(int sender_id, int receiver_id)
{
    if (!sock.isConnected())
    {
        emit Send_Applicant_State(-1);
        return;
    }
    TransPack pack;
    memset(pack.msg, 0, sizeof(pack.msg));
    pack.id = R_APPLICANT;
    pack.sender = sender_id;
    pack.recver = receiver_id;
    // msg is empty
    time_t t;
    time(&t);
    memset(pack.t, 0, sizeof(pack.t));
    time2str(localtime(&t), pack.t);
    int send_code = sock.send(pack);
    if (send_code == -1)
    {
        emit Send_Applicant_State(-1);
        return;
    }
    emit Send_Applicant_State(1);
    return;
}
void Connection::Send_Msg(int user_id, int friend_id, QString msg, int Whisper) // Whisper != 1 means Whisper mode
{
    if (!sock.isConnected())
    {
        emit Send_Msg_State(-1);
        return;
    }
    TransPack pack;
    memset(pack.msg, 0, sizeof(pack.msg));
    pack.id = Whisper == 1 ? 1 : D_WHISPER; // msg pack id > 0
    pack.sender = user_id;
    pack.recver = friend_id;

    std::string msg_str = msg.toStdString();
    sprintf(pack.msg, "%s", msg_str.c_str());

    time_t t;
    time(&t);
    memset(pack.t, 0, sizeof(pack.t));
    time2str(localtime(&t), pack.t);

    qDebug()<<"send msg"<<pack.sender<<pack.recver<<pack.t<<pack.msg;
    int send_code = sock.send(pack);
    if (send_code == -1)
    {
        emit Send_Msg_State(-1);
        return;
    }
    emit Send_Msg_State(1);
    return;
}
void Connection::Send_Reply(int user_id, int request_id, int state)
{
    if (!sock.isConnected())
    {
        emit Send_Reply_State(-1);
        return;
    }
    TransPack pack;
    memset(pack.msg, 0, sizeof(pack.msg));
    pack.id = R_REPLY;
    pack.sender = user_id;
    pack.recver = SERVER_IDX;

    sprintf(pack.msg, "%d/%d", request_id, state);
    qDebug()<<"Send_Reply";
    time_t t;
    time(&t);
    memset(pack.t, 0, sizeof(pack.t));
    time2str(localtime(&t), pack.t);
    int send_code = sock.send(pack);
    if (send_code == -1)
    {
        emit Send_Reply_State(-1);
        return;
    }
    emit Send_Reply_State(1);
    return;
}
void Connection::Get_Record(int user_id, int friend_id, int record_id)
{
    if (!sock.isConnected())
    {
        emit Get_Record_State(-1);
        return;
    }
    TransPack pack;
    memset(pack.msg, 0, sizeof(pack.msg));
    pack.id = record_id; // msg-getting pack id >= 0
    pack.sender = user_id;
    pack.recver = SERVER_IDX;
    sprintf(pack.msg, "%d", friend_id);
    time_t t;
    time(&t);
    memset(pack.t, 0, sizeof(pack.t));
    time2str(localtime(&t), pack.t);
    int send_code = sock.send(pack);
    if (send_code == -1)
    {
        emit Get_Record_State(-1);
        return;
    }
    emit Get_Record_State(1);
    return;
}

void Connection::Send_CheckOnline(int user_id, int friend_id){
//    if (!sock.isConnected())
//    {
//        emit Send_CheckOnline_State(-1);
//        return;
//    }
    qDebug()<<"send_checkOnline";
    TransPack pack;
    memset(pack.msg, 0, sizeof(pack.msg));
    pack.sender = user_id;
    pack.recver = friend_id;
    pack.id = R_ONOFFLINE;
    // no msg
    time_t t;
    time(&t);
    memset(pack.t, 0, sizeof(pack.t));
    time2str(localtime(&t), pack.t);
    int send_code = sock.send(pack);
//    if (send_code == -1)
//    {
//        emit Send_CheckOnline_State(-1);
//        return;
//    }
//    emit Send_CheckOnline_State(1);
    return;
}

