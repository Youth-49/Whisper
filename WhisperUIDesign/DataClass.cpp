#include "DataClass.h"
User::User(int id, QString name){
    user_id = id;
    user_name = name;
}
Friend::Friend(int id, QString name, QString nickname) {
    friend_id = id;
    friend_name = name;
    friend_nickname = nickname;
}
Record::Record(int id, tm datetime, int from_id, int to_id, QString content) {
    record_id = id;
    record_datetime = datetime;
    from_user_id = from_id;
    to_user_id = to_id;
    record_content = content;
}
//bool Record::compare(tm a, tm b) {
//    if (a.tm_year < b.tm_year)return true;
//    if (a.tm_mon < b.tm_mon)return true;
//    if (a.tm_mday < b.tm_mday)return true;
//    if (a.tm_hour < b.tm_hour)return true;
//    if (a.tm_min < b.tm_min)return true;
//    if (a.tm_sec < b.tm_sec)return true;
//    return false;
//}
//bool Record::operator < (Record b) {
//    return  compare(this->record_datetime, b.record_datetime);
//};
