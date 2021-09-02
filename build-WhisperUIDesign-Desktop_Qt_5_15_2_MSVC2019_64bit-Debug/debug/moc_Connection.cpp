/****************************************************************************
** Meta object code from reading C++ file 'Connection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../WhisperUIDesign/Connection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Connection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Connection_t {
    QByteArrayData data[45];
    char stringdata0[515];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Connection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Connection_t qt_meta_stringdata_Connection = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Connection"
QT_MOC_LITERAL(1, 11, 20), // "Send_ChangePWD_State"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "Send_Alias_State"
QT_MOC_LITERAL(4, 50, 20), // "Send_Applicant_State"
QT_MOC_LITERAL(5, 71, 14), // "Send_Msg_State"
QT_MOC_LITERAL(6, 86, 8), // "FrdState"
QT_MOC_LITERAL(7, 95, 16), // "Send_Login_State"
QT_MOC_LITERAL(8, 112, 14), // "Send_Reg_State"
QT_MOC_LITERAL(9, 127, 16), // "Send_Reply_State"
QT_MOC_LITERAL(10, 144, 16), // "Get_Record_State"
QT_MOC_LITERAL(11, 161, 15), // "Receiving_State"
QT_MOC_LITERAL(12, 177, 14), // "applicant_fail"
QT_MOC_LITERAL(13, 192, 15), // "changepwd_state"
QT_MOC_LITERAL(14, 208, 9), // "BuildUser"
QT_MOC_LITERAL(15, 218, 4), // "User"
QT_MOC_LITERAL(16, 223, 11), // "BuildFriend"
QT_MOC_LITERAL(17, 235, 6), // "Friend"
QT_MOC_LITERAL(18, 242, 11), // "BuildRecord"
QT_MOC_LITERAL(19, 254, 6), // "Record"
QT_MOC_LITERAL(20, 261, 12), // "GetApplicant"
QT_MOC_LITERAL(21, 274, 12), // "ReConnection"
QT_MOC_LITERAL(22, 287, 10), // "Send_Login"
QT_MOC_LITERAL(23, 298, 7), // "user_id"
QT_MOC_LITERAL(24, 306, 3), // "pwd"
QT_MOC_LITERAL(25, 310, 8), // "Send_Reg"
QT_MOC_LITERAL(26, 319, 8), // "username"
QT_MOC_LITERAL(27, 328, 14), // "Send_ChangePWD"
QT_MOC_LITERAL(28, 343, 7), // "old_pwd"
QT_MOC_LITERAL(29, 351, 7), // "new_pwd"
QT_MOC_LITERAL(30, 359, 10), // "Send_Alias"
QT_MOC_LITERAL(31, 370, 9), // "friend_id"
QT_MOC_LITERAL(32, 380, 8), // "nickname"
QT_MOC_LITERAL(33, 389, 14), // "Send_Applicant"
QT_MOC_LITERAL(34, 404, 9), // "sender_id"
QT_MOC_LITERAL(35, 414, 11), // "receiver_id"
QT_MOC_LITERAL(36, 426, 8), // "Send_Msg"
QT_MOC_LITERAL(37, 435, 3), // "msg"
QT_MOC_LITERAL(38, 439, 7), // "Whisper"
QT_MOC_LITERAL(39, 447, 10), // "Send_Reply"
QT_MOC_LITERAL(40, 458, 12), // "applicant_id"
QT_MOC_LITERAL(41, 471, 5), // "state"
QT_MOC_LITERAL(42, 477, 10), // "Get_Record"
QT_MOC_LITERAL(43, 488, 9), // "record_id"
QT_MOC_LITERAL(44, 498, 16) // "Send_CheckOnline"

    },
    "Connection\0Send_ChangePWD_State\0\0"
    "Send_Alias_State\0Send_Applicant_State\0"
    "Send_Msg_State\0FrdState\0Send_Login_State\0"
    "Send_Reg_State\0Send_Reply_State\0"
    "Get_Record_State\0Receiving_State\0"
    "applicant_fail\0changepwd_state\0BuildUser\0"
    "User\0BuildFriend\0Friend\0BuildRecord\0"
    "Record\0GetApplicant\0ReConnection\0"
    "Send_Login\0user_id\0pwd\0Send_Reg\0"
    "username\0Send_ChangePWD\0old_pwd\0new_pwd\0"
    "Send_Alias\0friend_id\0nickname\0"
    "Send_Applicant\0sender_id\0receiver_id\0"
    "Send_Msg\0msg\0Whisper\0Send_Reply\0"
    "applicant_id\0state\0Get_Record\0record_id\0"
    "Send_CheckOnline"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Connection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       3,    1,  147,    2, 0x06 /* Public */,
       4,    1,  150,    2, 0x06 /* Public */,
       5,    1,  153,    2, 0x06 /* Public */,
       6,    2,  156,    2, 0x06 /* Public */,
       7,    1,  161,    2, 0x06 /* Public */,
       8,    1,  164,    2, 0x06 /* Public */,
       9,    1,  167,    2, 0x06 /* Public */,
      10,    1,  170,    2, 0x06 /* Public */,
      11,    1,  173,    2, 0x06 /* Public */,
      12,    1,  176,    2, 0x06 /* Public */,
      13,    1,  179,    2, 0x06 /* Public */,
      14,    1,  182,    2, 0x06 /* Public */,
      16,    1,  185,    2, 0x06 /* Public */,
      18,    1,  188,    2, 0x06 /* Public */,
      20,    3,  191,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    0,  198,    2, 0x0a /* Public */,
      22,    2,  199,    2, 0x0a /* Public */,
      25,    2,  204,    2, 0x0a /* Public */,
      27,    3,  209,    2, 0x0a /* Public */,
      30,    3,  216,    2, 0x0a /* Public */,
      33,    2,  223,    2, 0x0a /* Public */,
      36,    4,  228,    2, 0x0a /* Public */,
      39,    3,  237,    2, 0x0a /* Public */,
      42,    3,  244,    2, 0x0a /* Public */,
      44,    2,  251,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   23,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   26,   24,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   23,   28,   29,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   23,   31,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   34,   35,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int,   23,   31,   37,   38,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   23,   40,   41,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   23,   31,   43,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   23,   31,

       0        // eod
};

void Connection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Connection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Send_ChangePWD_State((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->Send_Alias_State((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->Send_Applicant_State((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->Send_Msg_State((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->FrdState((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->Send_Login_State((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->Send_Reg_State((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->Send_Reply_State((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->Get_Record_State((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->Receiving_State((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->applicant_fail((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->changepwd_state((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->BuildUser((*reinterpret_cast< User(*)>(_a[1]))); break;
        case 13: _t->BuildFriend((*reinterpret_cast< Friend(*)>(_a[1]))); break;
        case 14: _t->BuildRecord((*reinterpret_cast< Record(*)>(_a[1]))); break;
        case 15: _t->GetApplicant((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 16: _t->ReConnection(); break;
        case 17: _t->Send_Login((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 18: _t->Send_Reg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 19: _t->Send_ChangePWD((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 20: _t->Send_Alias((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 21: _t->Send_Applicant((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->Send_Msg((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 23: _t->Send_Reply((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 24: _t->Get_Record((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 25: _t->Send_CheckOnline((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Connection::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::Send_ChangePWD_State)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Connection::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::Send_Alias_State)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Connection::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::Send_Applicant_State)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Connection::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::Send_Msg_State)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Connection::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::FrdState)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Connection::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::Send_Login_State)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Connection::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::Send_Reg_State)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Connection::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::Send_Reply_State)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Connection::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::Get_Record_State)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Connection::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::Receiving_State)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Connection::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::applicant_fail)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Connection::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::changepwd_state)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Connection::*)(User );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::BuildUser)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Connection::*)(Friend );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::BuildFriend)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Connection::*)(Record );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::BuildRecord)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Connection::*)(int , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::GetApplicant)) {
                *result = 15;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Connection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Connection.data,
    qt_meta_data_Connection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Connection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Connection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Connection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Connection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void Connection::Send_ChangePWD_State(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Connection::Send_Alias_State(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Connection::Send_Applicant_State(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Connection::Send_Msg_State(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Connection::FrdState(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Connection::Send_Login_State(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Connection::Send_Reg_State(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Connection::Send_Reply_State(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Connection::Get_Record_State(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Connection::Receiving_State(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Connection::applicant_fail(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Connection::changepwd_state(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Connection::BuildUser(User _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Connection::BuildFriend(Friend _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Connection::BuildRecord(Record _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Connection::GetApplicant(int _t1, int _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
