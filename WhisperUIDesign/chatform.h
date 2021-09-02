#ifndef CHATFORM_H
#define CHATFORM_H

#include <QMainWindow>
#include "loginform.h"
#include "signinform.h"
#include "changepasswordform.h"
#include "changeusernameform.h"
#include "friendrequestform.h"
#include "constants.h"
#include "friendbutton.h"

#include "Echo.h"

#include <QAction>
#include <QMenu>
#include <QMainWindow>
#include <loginform.h>
#include <signinform.h>
#include <qtoolbutton.h>
#include <QVBoxLayout>
#include <QMouseEvent>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class ChatForm; }
QT_END_NAMESPACE

class ChatForm : public QMainWindow
{
    Q_OBJECT

public:
    ChatForm(QWidget *parent = nullptr);
    ~ChatForm();
    void setMoreButton();
    QAction *m_changeUserNameAction;
    QAction *m_changePasswordAction;
    QAction *m_logOutAction;
    void loadConnect();
    void loadFriendList();
    QVBoxLayout *layout;
    QWidget *wgt;
    QPushButton* addFriendButton;
    void searchFriend();
    void wheelEvent(QWheelEvent* event);

    void keyPressEvent(QKeyEvent* event);

    Echo m_echo;

Q_SIGNALS:
    //Signal to Gao
    void getREGISTER(QString user_name, QString password);
    void getCHANGEPASSWORD(QString pre_password, QString new_password);
    void getCHANGENICKNAME(int friend_id, QString new_nickname);
    void getCHANGENAME(QString new_name);
    void getGetfriendlist();
    void getSENDFRIENDREQUEST(int to_id);
    void sendMESSAGE(int to_id, QString content, int Whisper);
    void getREPLYFRIENDREQUEST(int to_id, int state);
    void getGETRECORD(int friend_id, int record_id);
    void getFrdState(int );

private slots:
    void on_closeButton_clicked();
    void on_minimizeButton_clicked();
    void on_radiobutton_toggled(bool);
    void on_sendPushButton_clicked();
    void on_addFriendButton_clicked();

    void on_friendSearchEdit_textChanged(const QString &arg1);
    void onLogout();

    void on_whisperCheckBox_clicked();

    void on_whisperCheckBox_toggled(bool checked);

    void on_sendFileButton_clicked();

public slots:
    void showChatForm(int state);
    //void returnToChatForm();
    void closeChatForm();
    void appendToFriendList(Friend& frd);
    void onRecordUpdated(int frd_id);

    //修改自己的用户名，由changeusernameform发送信号
    void onUpdateUsername(QString);
    // signal from Gao
    void onFriendOnline(int frd_id, int state);

private:
    Ui::ChatForm *ui;
    LoginForm *m_login_form;
    SignInForm *m_signin_form;
    ChangePasswordForm *m_change_pwd_form;
    ChangeUsernameForm *m_change_name_form;
    FriendRequestForm *m_friend_request_form;
    FriendButton* m_chosen_friend_button;
    std::list<FriendButton*> m_friend_list;

    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *event);
    QPoint last_point_;             //记录放大之前的位置
    QPoint last_position_;          //窗口上一次的位置
    bool left_button_pressed_ = false;   //鼠标左键按下

};
#endif // CHATFORM_H
