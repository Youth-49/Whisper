#ifndef __DATACLASS_H
#define __DATACLASS_H
#include <list>
#include <time.h>
#include <QString>
#include <algorithm>

class Record
{
public:
	int record_id;
	tm record_datetime;
	int from_user_id;
	int to_user_id;
	QString record_content;
    Record(int id=0, tm datetime=tm(), int from_id=0, int to_id=0, QString content="");
	bool compare(tm a, tm b);
	bool operator < (Record b);
};

class Friend
{
public:
    int friend_id;
    QString friend_name;
    QString friend_nickname;
    std::list<Record> friends_record;
    Friend(int id=0, QString name="", QString nickname="");
};

class User
{
public:
    int user_id;
    QString user_name;
    std::list<Friend> user_friend;
    User(int id=0, QString name="");
};

#endif
