#include "Echo.h"
struct tpsort{
    bool operator () (const Record& r1, const Record& r2){
        tm t1 = r1.record_datetime, t2 = r2.record_datetime;
        return difftime(mktime(&t1), mktime(&t2)) < 0;
    }
};

void Echo::reconnect2Connection(){
    //connection:
    //to_yan
    Echo::connect(this, SIGNAL(Login(int, QString)), MyConnection, SLOT(Send_Login(int, QString)));
    Echo::connect(this, SIGNAL(Register(QString, QString)), MyConnection, SLOT(Send_Reg(QString, QString)));
    Echo::connect(this, SIGNAL(ChangePassword(int, QString, QString)), MyConnection, SLOT(Send_ChangePWD(int, QString, QString)));
    Echo::connect(this, SIGNAL(ChangeName(int, int, QString)), MyConnection, SLOT(Send_Alias(int, int, QString)));/////connection   µÄº¯Êýtobe
    Echo::connect(this, SIGNAL(ChangeNickname(int, int, QString)), MyConnection, SLOT(Send_Alias(int, int, QString)));
    //connect(this, SIGNAL(Getfriendlist(int)), MyConnection, SLOT(Send_Applicant(int)));
    Echo::connect(this, SIGNAL(SendFriendRequest(int, int)), MyConnection, SLOT(Send_Applicant(int, int)));
    Echo::connect(this, SIGNAL(Message(int, int, QString, int)), MyConnection, SLOT(Send_Msg(int, int, QString, int)));
    Echo::connect(this, SIGNAL(ReplyFriendRequest(int, int, int)), MyConnection, SLOT(Send_Reply(int, int, int)));
    Echo::connect(this, SIGNAL(GetRecord(int, int, int)), MyConnection, SLOT(Get_Record(int, int, int)));
    Echo::connect(this, SIGNAL(Get_Send_CheckOnline(int, int)), MyConnection, SLOT(Send_CheckOnline(int, int )));
    //connection:
    //from_yan
//    Echo::connect(MyConnection, SIGNAL(BuildUser(User )), this, SLOT(LoginState(User )));
    Echo::connect(MyConnection, SIGNAL(BuildUser(User)), this, SLOT(RegisterLoginState(User)));
    Echo::connect(MyConnection, SIGNAL(changepwd_state(int)), this, SLOT(ChangePasswordState(int)));
    Echo::connect(MyConnection, SIGNAL(Send_Alias_State(int)), this, SLOT(ChangeNicknameState(int)));
    Echo::connect(MyConnection, SIGNAL(BuildFriend(Friend)), this, SLOT(GetfriendlistState(Friend)));
    Echo::connect(MyConnection, SIGNAL(Send_Applicant_State(int)), this, SLOT(MySendFriendRequestState(int)));
    Echo::connect(MyConnection, SIGNAL(GetApplicant(int, int, QString)), this, SLOT(YouGetFriendRequestState(int, int, QString)));

    Echo::connect(MyConnection, SIGNAL(Send_Msg_State(int)), this, SLOT(MessageState(int)));
    Echo::connect(MyConnection, SIGNAL(applicant_fail(int)), this, SLOT(Add_fail(int)));
    Echo::connect(MyConnection, SIGNAL(BuildFriend(Friend)), this, SLOT(Add_success(Friend)));
    Echo::connect(MyConnection, SIGNAL(BuildRecord(Record)), this, SLOT(GetRecordState(Record)));
    Echo::connect(MyConnection, SIGNAL(FrdState(int, int)), this, SLOT(GETFrdState(int, int)));
}

Echo::Echo() {
    MyConnection = new Connection();
    reconnect2Connection();
}

//slots:
//from_yan
//void Echo::LoginState(User me) {
//    Me = me;
//    qDebug()<<"Echo"<<Me.user_id;
//    if (Me.user_name != "")emit ifLoginSuccess(1);
//    else  emit ifLoginSuccess(0);
//}
void Echo::RegisterLoginState(User me) {
    Me = me;
    if (Me.user_name != "")emit ifRegLoginSuccess(Me.user_id);//×¢²á³É¹¦
    else emit ifRegLoginSuccess(0);//×¢²áÊ§°Ü
}
void Echo::ChangePasswordState(int State) {
    if (State == 1)emit ifChangePwdSuccess(1);
    else emit ifChangePwdSuccess(0);
}
void Echo::ChangeNicknameState(int State) {
    if (State == 1)emit ifChangeNameSuccess(1);
    else emit ifChangeNameSuccess(0);
}
void Echo::GetfriendlistState(Friend f) {
    int mark = 1;
    for (std::list<Friend>::iterator iter = Me.user_friend.begin(); iter != Me.user_friend.end(); iter++)
    {
        if ((*iter).friend_id == f.friend_id) {
            mark = 0;
            break;
        }
    }
    if (mark) {
        Me.user_friend.push_front(f);
        emit returnNewFriend(Me.user_friend.front());
    }
}
void Echo::MySendFriendRequestState(int State) {
    if (State == 1)emit ifMySendRequestSuccess(0);
    else emit ifMySendRequestSuccess(1);
}
void Echo::YouGetFriendRequestState(int friend_id, int request_id, QString frd_name) {
    if (m_request_show_ready){
        emit ifYouGetRequestSuccess(friend_id, request_id, frd_name);
        m_request_show_ready = false;
    }
    else{
        request r = {friend_id, request_id};
        m_friend_request_queue.push_back(r);
    }
}
void Echo::MessageState(int State) {
    if (State == 1)emit ifSendMsgSuccess(0);
    else emit ifSendMsgSuccess(1);
}
void Echo::Add_fail(int friend_id) {
    emit ifAddFriendSuccess(0,friend_id);
}
void Echo::Add_success(Friend new_friend) { // just check if new friend is added
    emit ifAddFriendSuccess(1,new_friend.friend_id);
//    Me.user_friend.push_front(new_friend);
//    emit returnNewFriend(Me.user_friend.front());
}
void Echo::GetRecordState(Record chat_record) {
    int friend_id=0;
    if (chat_record.from_user_id == Me.user_id || chat_record.to_user_id == Me.user_id) {
        if (chat_record.from_user_id == Me.user_id)friend_id = chat_record.to_user_id;
        else friend_id = chat_record.from_user_id;
    }
    for (std::list<Friend>::iterator i = Me.user_friend.begin(); i != Me.user_friend.end(); i++) {
        if ((*i).friend_id == friend_id) {
            (*i).friends_record.push_front(chat_record);
            (*i).friends_record.sort(tpsort());
            emit recordReady(friend_id);
            break;
        }
    }
}
//slots:
//from_chang
void Echo::LOGIN(int user_id, QString password) {
    emit Login(user_id, password);
}
void Echo::REGISTER(QString user_name, QString password) {

    emit Register(user_name, password);
}
void Echo::CHANGEPASSWORD(QString pre_password, QString new_password) {
    emit ChangePassword(Me.user_id, pre_password, new_password);
}
void Echo::CHANGENAME(QString new_name){
    emit ChangeName(Me.user_id, Me.user_id, new_name);
}
void Echo::CHANGENICKNAME(int friend_id, QString new_nickname) {
    emit ChangeNickname(Me.user_id, friend_id, new_nickname);
}
void Echo::SENDFRIENDREQUEST(int to_id) {
    emit SendFriendRequest(Me.user_id, to_id);
}
void Echo::MESSAGE(int to_id, QString content, int Whisper) {
    tm record_datatime;
    time_t timer;
    time(&timer);
    record_datatime = *localtime(&timer);
    Record myrecord(0, record_datatime, Echo::Me.user_id, to_id, content); // record_id = 0 has no meaning
    for (std::list<Friend>::iterator i = Me.user_friend.begin(); i != Me.user_friend.end(); i++) {
        if ((*i).friend_id == to_id) {
            (*i).friends_record.push_front(myrecord);
            (*i).friends_record.sort(tpsort());
            break;
        }
    }
    emit Message(Me.user_id, to_id, content, Whisper);
}
void Echo::REPLYFRIENDREQUEST(int to_id, int state, int request_id, QString frd_name) {

    emit ReplyFriendRequest(Me.user_id, request_id, state);
    if (m_friend_request_queue.empty())m_request_show_ready = true;
    else{
        emit ifYouGetRequestSuccess(m_friend_request_queue.front().friend_id, m_friend_request_queue.front().request_id, frd_name);
        m_friend_request_queue.pop_front();
    }
}
void Echo::GETRECORD(int friend_id, int record_id) {
    emit GetRecord(Me.user_id, friend_id, record_id);
}
void Echo::Copy(User M) {
    Me.user_id = M.user_id;
    Me.user_name = M.user_name;
    Me.user_friend = M.user_friend;
};

void Echo::LOGOUT(){
    MyConnection->ReConnection();
    //reconnect2Connection();
    Me = User(0,"0");
    m_friend_request_queue.clear();
    m_request_show_ready = true;
}
// slot: signal from Chang
void Echo::FrdState(int friend_id){
    qDebug()<<"Echo::slot: emit signal";
    emit Get_Send_CheckOnline(Me.user_id,friend_id);
    return;
}
// slot: signal from Yan
void Echo::GETFrdState(int frd_id, int state){
    qDebug()<<"Echo: slot from yan : GETFrdState"<<frd_id<<state;
    emit ifFriendOnline(frd_id, state);
    return;
}

