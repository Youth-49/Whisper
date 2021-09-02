#include "DBController.h"

bool str2time (char * str, struct tm * time) {
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

char* time2str(struct tm * time, char * str) {
    memset(str, 0, strlen(str));
    time->tm_year += 1900;
    time->tm_mon += 1;
    
    sprintf(str,"%04d-%02d-%02d %02d:%02d:%02d",
            time->tm_year, time->tm_mon, time->tm_mday,time->tm_hour,time->tm_min,time->tm_sec);
    return str;
}

DBController::DBController(){}

DBController::~DBController(){}

bool DBController::init(){
    if (!mysql_init(&m_mysql) || 
        //!mysql_real_connect(&m_mysql, NULL, "root", NULL, "db", 0, NULL, 0)){
        !mysql_real_connect(&m_mysql, NULL, "app_user", "app_user", "db", 0, NULL, 0)){
        mysql_close(&m_mysql);
        return false;
    }
    return true;
}

uint DBController::getErrorNum(){
    mysql_errno(&m_mysql);
}

bool DBController::getMe(int me, TransPack& pack){
    return false; // not support yet
}

void parseRecord(MYSQL_ROW& row, TransPack& pack){
    pack.id = atoi(row[0]); 
    pack.sender = atoi(row[1]);
    pack.recver = atoi(row[2]);
    //str2time(row[3], &pack.t);
    memset(pack.t, 0, sizeof(pack.t));
    memcpy(pack.t, row[3], strlen(row[3]));
    memset(pack.msg, 0, strlen(pack.msg));
    memcpy(pack.msg, row[4], strlen(row[4]));
}

bool DBController::getRecords(int me, int frd, int id, std::list<TransPack>& list, uint n){
    list.clear();
    char exec_sql[MAX_SQL_LENGTH];
    sprintf(exec_sql, "CALL sp_get_record_chunk(%d, %d, %d, %d);", me, frd, id, n);
    if (!init())return false;;
    if (mysql_query(&m_mysql, exec_sql)){
        mysql_close(&m_mysql);
        return false;
    }
    MYSQL_RES *res = mysql_store_result(&m_mysql);
    mysql_close(&m_mysql);
    if(res == NULL){
        return false;
    }
    MYSQL_ROW row;
    TransPack pack;
    while(row = mysql_fetch_row(res)){
        parseRecord(row, pack);
        list.push_back(pack);
    }
    mysql_free_result(res);
    return true;
}

bool DBController::getUnreadRecords(int me, std::list<TransPack>& list){
    list.clear();
    char exec_sql[MAX_SQL_LENGTH];
    sprintf(exec_sql, "CALL sp_get_unread_record(%d);", me);
    if (!init())return false;;
    if (mysql_query(&m_mysql, exec_sql)){
        mysql_close(&m_mysql);
        return false;
    }
    MYSQL_RES *res = mysql_store_result(&m_mysql);
    mysql_close(&m_mysql);
    if(res == NULL){
        return false;
    }
    MYSQL_ROW row;
    TransPack pack;
    while(row = mysql_fetch_row(res)){
        parseRecord(row, pack);
        list.push_back(pack);
    }
    mysql_free_result(res);
    return true;
}

bool DBController::setRecordRead(int id){
    char exec_sql[MAX_SQL_LENGTH];
    sprintf(exec_sql, "CALL sp_update_read_record(%d);", id);
    if (!init())return false;;
    int ret = mysql_query(&m_mysql, exec_sql);
    mysql_close(&m_mysql);
    return !ret;
}

bool DBController::getFriends(int me, std::list<TransPack>& list){
    list.clear();
    char exec_sql[MAX_SQL_LENGTH];
    sprintf(exec_sql, "CALL sp_get_all_friend(%d);", me);
    if (!init())return false;;
    if (mysql_query(&m_mysql, exec_sql)){
        mysql_close(&m_mysql);
        return false;
    }
    MYSQL_RES *res = mysql_store_result(&m_mysql);
    mysql_close(&m_mysql);
    if(res == NULL){
        return false;
    }
    MYSQL_ROW row;
    TransPack pack;
    pack.id = D_FRIEND, pack.sender = SERVER_IDX, pack.recver = me;
    while(row = mysql_fetch_row(res)){
        time(&m_timer);
        //pack.t = *localtime(&m_timer);
        memset(pack.t, 0, sizeof(pack.t));
        time2str(localtime(&m_timer), pack.t);
        memset(pack.msg, 0, strlen(pack.msg));
        sprintf(pack.msg, "%s/%s/%s", row[0], row[1], row[2]);
        list.push_back(pack);
    }
    mysql_free_result(res);
    return true;
}

bool DBController::getFriendLinkRequests(int me, std::list<TransPack>& list){
    list.clear();
    char exec_sql[MAX_SQL_LENGTH];
    sprintf(exec_sql, "CALL sp_get_all_friend_request(%d);", me);
    if (!init())return false;;
    if (mysql_query(&m_mysql, exec_sql)){
        mysql_close(&m_mysql);
        return false;
    }
    MYSQL_RES *res = mysql_store_result(&m_mysql);
    mysql_close(&m_mysql);
    if(res == NULL){
        return false;
    }
    MYSQL_ROW row;
    TransPack pack;
    pack.id = R_APPLICANT, pack.recver = me;
    while(row = mysql_fetch_row(res)){
        time(&m_timer);
        pack.sender = atoi(row[1]);
        //pack.t = *localtime(&m_timer);
        memset(pack.t, 0, sizeof(pack.t));
        time2str(localtime(&m_timer), pack.t);
        memset(pack.msg, 0, strlen(pack.msg));
        sprintf(pack.msg, "%s/%s", row[0], row[2]);
        list.push_back(pack);
    }
    mysql_free_result(res);
    return true;
}

bool DBController::login(TransPack& pack){
    char exec_sql[MAX_SQL_LENGTH];
    sprintf(exec_sql, "CALL sp_login(%d, \"%s\");", pack.sender, pack.msg);
    if (!init())return false;
    if (mysql_query(&m_mysql, exec_sql)){
        mysql_close(&m_mysql);
        return false;
    }
    MYSQL_RES *res = mysql_store_result(&m_mysql);
    mysql_close(&m_mysql);
    if(res == NULL){
        return false;
    }
    MYSQL_ROW row;
    pack.id = D_ME, pack.recver = pack.sender, pack.sender = SERVER_IDX;
    row = mysql_fetch_row(res);
    time(&m_timer);
    //pack.t = *localtime(&m_timer);
    memset(pack.t, 0, sizeof(pack.t));
    time2str(localtime(&m_timer), pack.t);
    memset(pack.msg, 0, strlen(pack.msg));
    if (row){
        sprintf(pack.msg, "%s", row[1]); // success
    }
    else{
        sprintf(pack.msg, "%s", ""); // failed
    }
    mysql_free_result(res);
    return true;
}

bool DBController::createAccount(TransPack& pack){
    char exec_sql[MAX_SQL_LENGTH];
    char *name, *pwd;
    name = strtok(pack.msg, "/");
    pwd = strtok(NULL, "/");
    sprintf(exec_sql, "CALL sp_create_account(\"%s\", \"%s\");", name, pwd);
    if (!init())return false;;
    if (mysql_query(&m_mysql, exec_sql)){
        mysql_close(&m_mysql);
        return false;
    }
    MYSQL_RES *res = mysql_store_result(&m_mysql);
    mysql_close(&m_mysql);
    if(res == NULL){
        return false;
    }
    MYSQL_ROW row;
    if (!(row = mysql_fetch_row(res))){
        return false;
    }
    pack.id = D_ME, pack.recver = atoi(row[0]), pack.sender = SERVER_IDX;
    time(&m_timer);
    //pack.t = *localtime(&m_timer);
    memset(pack.t, 0, sizeof(pack.t));
    time2str(localtime(&m_timer), pack.t);
    memset(pack.msg, 0, strlen(pack.msg));
    sprintf(pack.msg, "%s", row[1]);
    mysql_free_result(res);
    return true;
}

bool DBController::createRecord(TransPack& pack){
    char exec_sql[MAX_SQL_LENGTH];
    char time[32];
    sprintf(exec_sql, "CALL sp_create_record(%d, %d, \"%s\", \"%s\");", 
        pack.sender, pack.recver, pack.t, pack.msg);
    if (!init())return false;
    //mysql_set_server_option(&m_mysql, MYSQL_OPTION_MULTI_STATEMENTS_ON);
    int ret = mysql_query(&m_mysql, exec_sql);
    mysql_close(&m_mysql);
    if(ret){
        return false;
    }
    return true;
}

bool DBController::replyFriendLinkRequest(TransPack& pack){
    char exec_sql[MAX_SQL_LENGTH];
    int request_id, state;
    request_id = atoi(strtok(pack.msg, "/"));
    state = atoi(strtok(NULL, "/"));
    sprintf(exec_sql, "CALL sp_reply_friend_link_request(%d, %d);", request_id, state);
    if (!init())return false;;
    if (mysql_query(&m_mysql, exec_sql)){
        mysql_close(&m_mysql);
        return false;
    }
    MYSQL_RES *res = mysql_store_result(&m_mysql);
    mysql_close(&m_mysql);
    if(res == NULL){
        return false;
    }
    MYSQL_ROW row;
    if (!(row = mysql_fetch_row(res))){
        return false;
    }
    time(&m_timer);
    //pack.t = *localtime(&m_timer);
    memset(pack.t, 0, sizeof(pack.t));
    time2str(localtime(&m_timer), pack.t);
    memset(pack.msg, 0, strlen(pack.msg));
    sprintf(pack.msg, "%d/%d", request_id, state);
    pack.recver = atoi(row[1]); // app_account
    mysql_free_result(res);
    return true;
}

bool DBController::createFriendLinkRequest(TransPack& pack){
    char exec_sql[MAX_SQL_LENGTH];
    sprintf(exec_sql, "CALL sp_create_friend_link_request(%d, %d);", pack.sender, pack.recver);
    if (!init())return false;;
    if (mysql_query(&m_mysql, exec_sql)){
        mysql_close(&m_mysql);
        return false;
    }
    MYSQL_RES *res = mysql_store_result(&m_mysql);
    mysql_close(&m_mysql);
    if(res == NULL){
        return false;
    }
    MYSQL_ROW row;
    if (!(row = mysql_fetch_row(res))){
        return false;
    }
    time(&m_timer);
    //pack.t = *localtime(&m_timer);
    memset(pack.t, 0, sizeof(pack.t));
    time2str(localtime(&m_timer), pack.t);
    memset(pack.msg, 0, strlen(pack.msg));
    sprintf(pack.msg, "%s/%s", row[0], row[4]);
    mysql_free_result(res);
    return true;
}

bool DBController::updatePWD(TransPack& pack){
    char exec_sql[MAX_SQL_LENGTH];
    char *old_pwd, *new_pwd;
    old_pwd = strtok(pack.msg, "/");
    new_pwd = strtok(NULL, "/");
    sprintf(exec_sql, "CALL sp_update_passkey(%d, \"%s\", \"%s\");", pack.sender, old_pwd, new_pwd);
    if (!init())return false;;
    if (mysql_query(&m_mysql, exec_sql)){
        mysql_close(&m_mysql);
        return false;
    }
    MYSQL_RES *res = mysql_store_result(&m_mysql);
    mysql_close(&m_mysql);
    if(res == NULL){
        return false;
    }
    MYSQL_ROW row;
    pack.recver = pack.sender;
    pack.sender = SERVER_IDX;
    memset(pack.msg, 0, strlen(pack.msg));
    if (!(row = mysql_fetch_row(res))){
        sprintf(pack.msg, "%d", -1);
    }
    else {
        sprintf(pack.msg, "%d", 1);
    }
    time(&m_timer);
    //pack.t = *localtime(&m_timer);
    memset(pack.t, 0, sizeof(pack.t));
    time2str(localtime(&m_timer), pack.t);
    mysql_free_result(res);
    return true;
}

bool DBController::updateAlias(TransPack& pack){
    char exec_sql[MAX_SQL_LENGTH];
    sprintf(exec_sql, "CALL sp_update_alias(%d, %d, \"%s\");", pack.sender, pack.recver, pack.msg);
    if (!init())return false;;
    int ret = mysql_query(&m_mysql, exec_sql);
    mysql_close(&m_mysql);
    return !ret;
}

bool DBController::updateUsername(TransPack& pack){
    char exec_sql[MAX_SQL_LENGTH];
    sprintf(exec_sql, "CALL sp_update_account(%d, \"%s\");", pack.sender, pack.msg);
    if (!init())return false;;
    int ret = mysql_query(&m_mysql, exec_sql);
    mysql_close(&m_mysql);
    return !ret;
}