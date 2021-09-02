#ifndef __ECHO_H
#define __ECHO_H
#include "DataClass.h"
#include "Connection.h"
#include <QObject>
#include <list>

struct request{
    int friend_id, request_id;
};

class Echo :public QObject
{
    Q_OBJECT
public:
    User Me = User(0,"0");
    Echo();
    Connection* MyConnection;
    void Copy(User M);

    std::list<request> m_friend_request_queue;
    bool m_request_show_ready = true;

    void reconnect2Connection();

signals:
    //to_yan
    //to_yan
    void Login(int user_id, QString password);
    void Register(QString user_name, QString password);
    void ChangePassword(int user_id, QString pre_password, QString new_password);
    void ChangeName(int user_id,int friend_id, QString new_name);
    void ChangeNickname(int user_id, int friend_id, QString new_nickname);
    void SendFriendRequest(int from_id, int to_id);
    void Message(int from_id, int to_id, QString content, int Whisper);
    void ReplyFriendRequest(int from_id, int to_id, int state);
    void GetRecord(int user_id, int friend_id, int record_id);
    void Get_Send_CheckOnline(int, int);

    //signals
    //to_chang
//    void ifLoginSuccess(int state);
    void ifRegLoginSuccess(int state);
    void ifChangeNameSuccess(int state);
    void ifChangePwdSuccess(int state);
    void ifSendMsgSuccess(int state);
    void ifMySendRequestSuccess(int state);
    void ifYouGetRequestSuccess(int state, int request_id, QString frd_name);
    void ifAddFriendSuccess(int state, int friend_id);
    void returnNewFriend(Friend& newfriend);
    void recordReady(int friend_id);
    void ifFriendOnline(int frd_id, int state); // 1 means online

public slots:
    //from_yan
//    void LoginState(User Me);
    void RegisterLoginState(User me);
    void ChangePasswordState(int State);
    void ChangeNicknameState(int State);
    void GetfriendlistState(Friend friendlist);
    void MySendFriendRequestState(int State);
    void YouGetFriendRequestState(int friend_id, int request_id, QString frd_name);
    void MessageState(int state);
    void Add_fail(int friend_id);
    void Add_success(Friend new_friend);
    void GetRecordState(Record chat_record);
    void GETFrdState(int frd_id, int state);
    //slots:
    //from_chang
    void LOGIN(int user_id, QString password);
    void REGISTER(QString user_name, QString password);
    void CHANGEPASSWORD(QString pre_password, QString new_password);
    void CHANGENAME(QString new_name);
    void CHANGENICKNAME(int friend_id, QString new_nickname);
    void SENDFRIENDREQUEST(int to_id);
    void MESSAGE(int to_id, QString content, int Whisper);
    void REPLYFRIENDREQUEST(int to_id, int state, int request_id, QString frd_name);
    void GETRECORD(int friend_id, int record_id);
    void LOGOUT();
    void FrdState(int friend_id);
};
#endif
