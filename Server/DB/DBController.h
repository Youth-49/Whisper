#ifndef DBCONTROLLER_H
#define DBCONTROLLER_H

#define MAX_MSG_LEN 1024
#define MAX_ACCOUNTS 1024
#define MAX_WAIT_MSG 32
#define MAX_WAIT_TIME 5
#define MAX_SQL_LENGTH 256

#include <stdio.h>
#include <mysql/mysql.h>
#include <list>
#include <time.h>
#include <string.h>

enum REQUEST_CODE{R_REGISTER = -1, R_LOGIN = -2, R_APPLICANT = -3, R_REPLY = -4, R_UPDATEPWD = -5, R_UPDATEALIAS = -6, R_ONOFFLINE = -7};
enum DATA_CODE{D_ME = -11, D_FRIEND = -22, D_FILE_HEAD = -33, D_FILE_PACK = -34, D_FILE_END = -35, D_WHISPER = -44};
#define SERVER_IDX -1

/* delete later */
struct TransPack{
	int id;
	int sender, recver;
	char msg[MAX_MSG_LEN];
    char t[20];
	//struct tm t;
};

class DBController{
public:
    DBController();
    ~DBController();

    bool init();

    // Not support yet
    bool getMe(int me, TransPack& pack);

    /** getRecords
     * @brief 获取聊天记录
     * @param me: int 申请者account_id
     * @param frd: int 目标account_id
     * @param id: int 置0获取最新的n条数据; 否则获取自id开始的n条历史数据
     * @param list: std::list<TransPack>& 挂载获取到的Records, Format: {id, from, to, msg, t}
     * @param n: uint chunk_size
     * @return 是否成功获取
     */
    bool getRecords(int me, int frd, int id, std::list<TransPack>& list, uint n = 10);

    /** getUnreadRecords
     * @brief 获取全部未读聊天记录
     * @param me: int 申请者account_id
     * @param list: std::list<TransPack>& 挂载获取到的Records, Format: {id, from, to, msg, t}
     * @return 是否成功获取
     */
    bool getUnreadRecords(int me, std::list<TransPack>& list);

    /** setRecordRead
     * @brief 将消息设置为已读
     * @param id: int record_id
     * @return 是否设置成功
     */
    bool setRecordRead(int id);

    /** getFriends
     * @brief 获取好友列表
     * @param me: int 申请者account_id
     * @param list: std::list<TransPack>& 挂在获取到的好友列表, 
     *              Format: {
     *                  id = D_FRIEND, 
     *                  from = SERVER_IDX, 
     *                  to = me, 
     *                  msg = friend_account_id/friend_account_name/friend_alias, 
     *                  t
     *              }
     * @return 是否获取成功
     */
    bool getFriends(int me, std::list<TransPack>& list);

    /** getFriendLinkRequests
     * @brief 获取好友申请列表
     * @param me: int 申请者account_id
     * @param list: std::list<TransPack>& 挂在获取到的好友申请列表, 
     *              Format: {
     *                  id = R_APPLICANT, 
     *                  from = app_sender, 
     *                  to = me, 
     *                  msg = request_id/username, 
     *                  t
     *              }
     * @return 是否获取成功
     */
    bool getFriendLinkRequests(int me, std::list<TransPack>& list);

    /** login
     * @brief 登陆
     * @param pack: TransPack& 登录信息 
     *              InputFormat: {
     *                  id = R_LOGIN, 
     *                  from = me, 
     *                  to = SERVER_IDX, 
     *                  msg = password, 
     *                  t
     *              }
     *              OutputFormat: {
     *                  id = D_ME, 
     *                  from = SERVER_IDX, 
     *                  to = me, 
     *                  msg = success ? name : "", 
     *                  t
     *              }
     * @return 是否成功执行相关操作
     */
    bool login(TransPack& pack);

    /** createAccount
     * @brief 注册
     * @param pack: TransPack& 注册信息 
     *              InputFormat: {
     *                  id = R_REGISTER, 
     *                  from = x, 
     *                  to = SERVER_IDX, 
     *                  msg = username/password,
     *                  t
     *              }
     *              OutputFormat: {
     *                  id = R_REGISTER, 
     *                  from = SERVER_IDX, 
     *                  to = my_account_id, 
     *                  msg = username, 
     *                  t
     *              }
     * @return 是否成功执行相关操作
     */
    bool createAccount(TransPack& pack);

    /** createRecord
     * @brief 添加聊天记录
     * @param pack: TransPack& 聊天记录 
     *              InputFormat: {
     *                  id > 0, 
     *                  from = me, 
     *                  to = recv_accound,
     *                  msg,
     *                  t
     *              }
     * @return 是否成功执行相关操作
     */
    bool createRecord(TransPack& pack);

    /** createFriendLinkRequest
     * @brief 添加好友申请
     * @param pack: TransPack& 好友申请 
     *              InputFormat: {
     *                  id = R_APPLICANT, 
     *                  from = me, 
     *                  to = target_accound,
     *                  msg,
     *                  t
     *              }
     *              OutputFormat: {
     *                  id = R_APPLICANT, 
     *                  from = target_accound, 
     *                  to = me,
     *                  msg = request_id/username,
     *                  t
     *              }
     * @return 是否成功执行相关操作
     */
    bool createFriendLinkRequest(TransPack& pack);

    /** replyFriendLinkRequest
     * @brief 回应好友申请
     * @param pack: TransPack& 好友申请回应 
     *              InputFormat: {
     *                  id = R_REPLY, 
     *                  from = me, 
     *                  to = SERVER_IDX,
     *                  msg = request_id/state(-1 = reject, 1 = accept),
     *                  t
     *              }
     *              OutputFormat: {
     *                  id = R_REPLY, 
     *                  from = me, 
     *                  to = app_account,
     *                  msg = request_id/state(-1 = reject, 1 = accept),
     *                  t
     *              }
     * @return 是否成功执行相关操作
     */
    bool replyFriendLinkRequest(TransPack& pack);

    /** updatePWD
     * @brief 更新密码
     * @param pack: TransPack& 个人信息
     *              InputFormat: {
     *                  id = R_UPDATEPWD, 
     *                  from = me, 
     *                  to = SERVER_IDX,
     *                  msg = old_pwd/new_pwd,
     *                  t
     *              }
     *              OutputFormat: {
     *                  id = R_UPDATEPWD, 
     *                  from = me, 
     *                  to = SERVER_IDX,
     *                  msg = state(-1 = failed, 1 = success),
     *                  t
     *              }
     * @return 是否成功执行相关操作
     */
    bool updatePWD(TransPack& pack);

    /** updateAlias
     * @brief 更新别称
     * @param pack: TransPack& 个人信息
     *              InputFormat: {
     *                  id = R_UPDATEALIAS, 
     *                  from = me, 
     *                  to = target_account,
     *                  msg = nickname,
     *                  t
     *              }
     * @return 是否成功执行相关操作
     */
    bool updateAlias(TransPack& pack);

    /** updateUsername
     * @brief 更新用户名
     * @param pack: TransPack& 个人信息
     *              InputFormat: {
     *                  id = R_UPDATEALIAS, 
     *                  from = me, 
     *                  to = me,
     *                  msg = username,
     *                  t
     *              }
     * @return 是否成功执行相关操作
     */
    bool updateUsername(TransPack& pack);

    uint getErrorNum();

private:
    MYSQL m_mysql;
    time_t m_timer;
};

#endif