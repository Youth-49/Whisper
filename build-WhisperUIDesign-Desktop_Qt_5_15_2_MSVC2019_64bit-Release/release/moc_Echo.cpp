/****************************************************************************
** Meta object code from reading C++ file 'Echo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../WhisperUIDesign/Echo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Echo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Echo_t {
    QByteArrayData data[71];
    char stringdata0[874];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Echo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Echo_t qt_meta_stringdata_Echo = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Echo"
QT_MOC_LITERAL(1, 5, 5), // "Login"
QT_MOC_LITERAL(2, 11, 0), // ""
QT_MOC_LITERAL(3, 12, 7), // "user_id"
QT_MOC_LITERAL(4, 20, 8), // "password"
QT_MOC_LITERAL(5, 29, 8), // "Register"
QT_MOC_LITERAL(6, 38, 9), // "user_name"
QT_MOC_LITERAL(7, 48, 14), // "ChangePassword"
QT_MOC_LITERAL(8, 63, 12), // "pre_password"
QT_MOC_LITERAL(9, 76, 12), // "new_password"
QT_MOC_LITERAL(10, 89, 10), // "ChangeName"
QT_MOC_LITERAL(11, 100, 9), // "friend_id"
QT_MOC_LITERAL(12, 110, 8), // "new_name"
QT_MOC_LITERAL(13, 119, 14), // "ChangeNickname"
QT_MOC_LITERAL(14, 134, 12), // "new_nickname"
QT_MOC_LITERAL(15, 147, 17), // "SendFriendRequest"
QT_MOC_LITERAL(16, 165, 7), // "from_id"
QT_MOC_LITERAL(17, 173, 5), // "to_id"
QT_MOC_LITERAL(18, 179, 7), // "Message"
QT_MOC_LITERAL(19, 187, 7), // "content"
QT_MOC_LITERAL(20, 195, 7), // "Whisper"
QT_MOC_LITERAL(21, 203, 18), // "ReplyFriendRequest"
QT_MOC_LITERAL(22, 222, 5), // "state"
QT_MOC_LITERAL(23, 228, 9), // "GetRecord"
QT_MOC_LITERAL(24, 238, 9), // "record_id"
QT_MOC_LITERAL(25, 248, 20), // "Get_Send_CheckOnline"
QT_MOC_LITERAL(26, 269, 17), // "ifRegLoginSuccess"
QT_MOC_LITERAL(27, 287, 19), // "ifChangeNameSuccess"
QT_MOC_LITERAL(28, 307, 18), // "ifChangePwdSuccess"
QT_MOC_LITERAL(29, 326, 16), // "ifSendMsgSuccess"
QT_MOC_LITERAL(30, 343, 22), // "ifMySendRequestSuccess"
QT_MOC_LITERAL(31, 366, 22), // "ifYouGetRequestSuccess"
QT_MOC_LITERAL(32, 389, 10), // "request_id"
QT_MOC_LITERAL(33, 400, 8), // "frd_name"
QT_MOC_LITERAL(34, 409, 18), // "ifAddFriendSuccess"
QT_MOC_LITERAL(35, 428, 15), // "returnNewFriend"
QT_MOC_LITERAL(36, 444, 7), // "Friend&"
QT_MOC_LITERAL(37, 452, 9), // "newfriend"
QT_MOC_LITERAL(38, 462, 11), // "recordReady"
QT_MOC_LITERAL(39, 474, 14), // "ifFriendOnline"
QT_MOC_LITERAL(40, 489, 6), // "frd_id"
QT_MOC_LITERAL(41, 496, 18), // "RegisterLoginState"
QT_MOC_LITERAL(42, 515, 4), // "User"
QT_MOC_LITERAL(43, 520, 2), // "me"
QT_MOC_LITERAL(44, 523, 19), // "ChangePasswordState"
QT_MOC_LITERAL(45, 543, 5), // "State"
QT_MOC_LITERAL(46, 549, 19), // "ChangeNicknameState"
QT_MOC_LITERAL(47, 569, 18), // "GetfriendlistState"
QT_MOC_LITERAL(48, 588, 6), // "Friend"
QT_MOC_LITERAL(49, 595, 10), // "friendlist"
QT_MOC_LITERAL(50, 606, 24), // "MySendFriendRequestState"
QT_MOC_LITERAL(51, 631, 24), // "YouGetFriendRequestState"
QT_MOC_LITERAL(52, 656, 12), // "MessageState"
QT_MOC_LITERAL(53, 669, 8), // "Add_fail"
QT_MOC_LITERAL(54, 678, 11), // "Add_success"
QT_MOC_LITERAL(55, 690, 10), // "new_friend"
QT_MOC_LITERAL(56, 701, 14), // "GetRecordState"
QT_MOC_LITERAL(57, 716, 6), // "Record"
QT_MOC_LITERAL(58, 723, 11), // "chat_record"
QT_MOC_LITERAL(59, 735, 11), // "GETFrdState"
QT_MOC_LITERAL(60, 747, 5), // "LOGIN"
QT_MOC_LITERAL(61, 753, 8), // "REGISTER"
QT_MOC_LITERAL(62, 762, 14), // "CHANGEPASSWORD"
QT_MOC_LITERAL(63, 777, 10), // "CHANGENAME"
QT_MOC_LITERAL(64, 788, 14), // "CHANGENICKNAME"
QT_MOC_LITERAL(65, 803, 17), // "SENDFRIENDREQUEST"
QT_MOC_LITERAL(66, 821, 7), // "MESSAGE"
QT_MOC_LITERAL(67, 829, 18), // "REPLYFRIENDREQUEST"
QT_MOC_LITERAL(68, 848, 9), // "GETRECORD"
QT_MOC_LITERAL(69, 858, 6), // "LOGOUT"
QT_MOC_LITERAL(70, 865, 8) // "FrdState"

    },
    "Echo\0Login\0\0user_id\0password\0Register\0"
    "user_name\0ChangePassword\0pre_password\0"
    "new_password\0ChangeName\0friend_id\0"
    "new_name\0ChangeNickname\0new_nickname\0"
    "SendFriendRequest\0from_id\0to_id\0Message\0"
    "content\0Whisper\0ReplyFriendRequest\0"
    "state\0GetRecord\0record_id\0"
    "Get_Send_CheckOnline\0ifRegLoginSuccess\0"
    "ifChangeNameSuccess\0ifChangePwdSuccess\0"
    "ifSendMsgSuccess\0ifMySendRequestSuccess\0"
    "ifYouGetRequestSuccess\0request_id\0"
    "frd_name\0ifAddFriendSuccess\0returnNewFriend\0"
    "Friend&\0newfriend\0recordReady\0"
    "ifFriendOnline\0frd_id\0RegisterLoginState\0"
    "User\0me\0ChangePasswordState\0State\0"
    "ChangeNicknameState\0GetfriendlistState\0"
    "Friend\0friendlist\0MySendFriendRequestState\0"
    "YouGetFriendRequestState\0MessageState\0"
    "Add_fail\0Add_success\0new_friend\0"
    "GetRecordState\0Record\0chat_record\0"
    "GETFrdState\0LOGIN\0REGISTER\0CHANGEPASSWORD\0"
    "CHANGENAME\0CHANGENICKNAME\0SENDFRIENDREQUEST\0"
    "MESSAGE\0REPLYFRIENDREQUEST\0GETRECORD\0"
    "LOGOUT\0FrdState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Echo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  224,    2, 0x06 /* Public */,
       5,    2,  229,    2, 0x06 /* Public */,
       7,    3,  234,    2, 0x06 /* Public */,
      10,    3,  241,    2, 0x06 /* Public */,
      13,    3,  248,    2, 0x06 /* Public */,
      15,    2,  255,    2, 0x06 /* Public */,
      18,    4,  260,    2, 0x06 /* Public */,
      21,    3,  269,    2, 0x06 /* Public */,
      23,    3,  276,    2, 0x06 /* Public */,
      25,    2,  283,    2, 0x06 /* Public */,
      26,    1,  288,    2, 0x06 /* Public */,
      27,    1,  291,    2, 0x06 /* Public */,
      28,    1,  294,    2, 0x06 /* Public */,
      29,    1,  297,    2, 0x06 /* Public */,
      30,    1,  300,    2, 0x06 /* Public */,
      31,    3,  303,    2, 0x06 /* Public */,
      34,    2,  310,    2, 0x06 /* Public */,
      35,    1,  315,    2, 0x06 /* Public */,
      38,    1,  318,    2, 0x06 /* Public */,
      39,    2,  321,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      41,    1,  326,    2, 0x0a /* Public */,
      44,    1,  329,    2, 0x0a /* Public */,
      46,    1,  332,    2, 0x0a /* Public */,
      47,    1,  335,    2, 0x0a /* Public */,
      50,    1,  338,    2, 0x0a /* Public */,
      51,    3,  341,    2, 0x0a /* Public */,
      52,    1,  348,    2, 0x0a /* Public */,
      53,    1,  351,    2, 0x0a /* Public */,
      54,    1,  354,    2, 0x0a /* Public */,
      56,    1,  357,    2, 0x0a /* Public */,
      59,    2,  360,    2, 0x0a /* Public */,
      60,    2,  365,    2, 0x0a /* Public */,
      61,    2,  370,    2, 0x0a /* Public */,
      62,    2,  375,    2, 0x0a /* Public */,
      63,    1,  380,    2, 0x0a /* Public */,
      64,    2,  383,    2, 0x0a /* Public */,
      65,    1,  388,    2, 0x0a /* Public */,
      66,    3,  391,    2, 0x0a /* Public */,
      67,    4,  398,    2, 0x0a /* Public */,
      68,    2,  407,    2, 0x0a /* Public */,
      69,    0,  412,    2, 0x0a /* Public */,
      70,    1,  413,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    3,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    3,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    3,   11,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   16,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int,   16,   17,   19,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   16,   17,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,   11,   24,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   22,   32,   33,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   11,
    QMetaType::Void, 0x80000000 | 36,   37,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   40,   22,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   11,   32,   33,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 48,   55,
    QMetaType::Void, 0x80000000 | 57,   58,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   40,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   11,   14,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int,   17,   19,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString,   17,   22,   32,   33,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void Echo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Echo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Login((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->Register((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->ChangePassword((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->ChangeName((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: _t->ChangeNickname((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 5: _t->SendFriendRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->Message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 7: _t->ReplyFriendRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->GetRecord((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->Get_Send_CheckOnline((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->ifRegLoginSuccess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->ifChangeNameSuccess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->ifChangePwdSuccess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->ifSendMsgSuccess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->ifMySendRequestSuccess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->ifYouGetRequestSuccess((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 16: _t->ifAddFriendSuccess((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->returnNewFriend((*reinterpret_cast< Friend(*)>(_a[1]))); break;
        case 18: _t->recordReady((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->ifFriendOnline((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->RegisterLoginState((*reinterpret_cast< User(*)>(_a[1]))); break;
        case 21: _t->ChangePasswordState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->ChangeNicknameState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->GetfriendlistState((*reinterpret_cast< Friend(*)>(_a[1]))); break;
        case 24: _t->MySendFriendRequestState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->YouGetFriendRequestState((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 26: _t->MessageState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->Add_fail((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->Add_success((*reinterpret_cast< Friend(*)>(_a[1]))); break;
        case 29: _t->GetRecordState((*reinterpret_cast< Record(*)>(_a[1]))); break;
        case 30: _t->GETFrdState((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->LOGIN((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 32: _t->REGISTER((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 33: _t->CHANGEPASSWORD((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 34: _t->CHANGENAME((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->CHANGENICKNAME((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 36: _t->SENDFRIENDREQUEST((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->MESSAGE((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 38: _t->REPLYFRIENDREQUEST((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 39: _t->GETRECORD((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 40: _t->LOGOUT(); break;
        case 41: _t->FrdState((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Echo::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::Login)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Echo::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::Register)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Echo::*)(int , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::ChangePassword)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Echo::*)(int , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::ChangeName)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Echo::*)(int , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::ChangeNickname)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Echo::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::SendFriendRequest)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Echo::*)(int , int , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::Message)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Echo::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::ReplyFriendRequest)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Echo::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::GetRecord)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Echo::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::Get_Send_CheckOnline)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Echo::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::ifRegLoginSuccess)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Echo::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::ifChangeNameSuccess)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Echo::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::ifChangePwdSuccess)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Echo::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::ifSendMsgSuccess)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Echo::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::ifMySendRequestSuccess)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Echo::*)(int , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::ifYouGetRequestSuccess)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Echo::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::ifAddFriendSuccess)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Echo::*)(Friend & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::returnNewFriend)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Echo::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::recordReady)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Echo::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Echo::ifFriendOnline)) {
                *result = 19;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Echo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Echo.data,
    qt_meta_data_Echo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Echo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Echo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Echo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Echo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
void Echo::Login(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Echo::Register(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Echo::ChangePassword(int _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Echo::ChangeName(int _t1, int _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Echo::ChangeNickname(int _t1, int _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Echo::SendFriendRequest(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Echo::Message(int _t1, int _t2, QString _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Echo::ReplyFriendRequest(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Echo::GetRecord(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Echo::Get_Send_CheckOnline(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Echo::ifRegLoginSuccess(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Echo::ifChangeNameSuccess(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Echo::ifChangePwdSuccess(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Echo::ifSendMsgSuccess(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Echo::ifMySendRequestSuccess(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Echo::ifYouGetRequestSuccess(int _t1, int _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Echo::ifAddFriendSuccess(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Echo::returnNewFriend(Friend & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Echo::recordReady(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Echo::ifFriendOnline(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
