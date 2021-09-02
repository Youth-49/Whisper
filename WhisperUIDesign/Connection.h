#ifndef CONNECTION_H
#define CONNECTION_H

#include <QObject>
#include <QString>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <list>
#include <winsock2.h>
#include <windows.h>
#include <thread>

#include "SocketClient.h"
#include "DataClass.h"
#include <QDebug>
#include <QMetaType>

#include <string.h>

#define SERVER_IDX -1

// main.cpp 中 设置  QTextCodec::setCodecForLocale(QTextCodec::codecForName( "UTF-8"));


class Connection:public QObject
{
    Q_OBJECT
private:
    SocketClient sock;
    std::thread receive_thread;
    void ParsePack();
    char m_ip[20];
    const int m_port;

public:
    Connection(const char *ip = "10.195.113.84", const int port = 1234);
    int isConnected(){
        return sock.isConnected();
    }

    // slot funtion:
    // request server

public slots:
    void ReConnection();
    void Send_Login(int user_id, QString pwd);
    void Send_Reg(QString username, QString pwd);
    void Send_ChangePWD(int user_id, QString old_pwd, QString new_pwd);
    void Send_Alias(int user_id, int friend_id, QString nickname);
    void Send_Applicant(int sender_id, int receiver_id);
    void Send_Msg(int user_id, int friend_id, QString msg, int Whisper);
    void Send_Reply(int user_id, int applicant_id, int state);
    void Get_Record(int user_id, int friend_id, int record_id);
    void Send_CheckOnline(int user_id, int friend_id); //

    signals:
        // @param: connection state, where:
        // -1: fail (unconnected)
        // 1: succeed (connected)
        void Send_ChangePWD_State(int );
        void Send_Alias_State(int );
        void Send_Applicant_State(int );
        void Send_Msg_State(int );
        void FrdState(int , int);

        void Send_Login_State(int );
        void Send_Reg_State(int );
        void Send_Reply_State(int );
        void Get_Record_State(int );
        void Receiving_State(int );

        // @param: int 拒绝人的id
        void applicant_fail(int );
        // @param: int, where:
        // -1: fail to change(old password does not match)
        // 1: succeed
        void changepwd_state(int );
        // @param: User me, where:
        // username != "" : login successfully
        // username == "" : fail to login/register
        void BuildUser(User );
        // emit when pull friend list/add a new friend
        void BuildFriend(Friend );
        // emit when pull/get record
        void BuildRecord(Record );
        // emit when receiving a friend application
        void GetApplicant(int ,int, QString);
};

// convert string to tm structure
bool str2time (char * str, struct tm * time);
// convert tm structure to string
char* time2str(struct tm * time, char * str);

#endif // CONNECTION_H
