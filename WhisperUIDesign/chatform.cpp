#include "chatform.h"
#include "ui_chatform.h"

ChatForm::ChatForm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ChatForm)
{
    //定义各界面
    m_login_form = new LoginForm(m_echo);
    m_signin_form = new SignInForm(m_echo);
    m_change_pwd_form = new ChangePasswordForm(m_echo);
    m_change_name_form = new ChangeUsernameForm(m_echo);
    m_friend_request_form = new FriendRequestForm(m_echo);

    //界面设置
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window|Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    //搜索框
    QAction *searchAction = new QAction(ui->friendSearchEdit);
    searchAction->setIcon(QIcon(":/src/GUI/icon/search.png"));
    ui->friendSearchEdit->addAction(searchAction, QLineEdit::LeadingPosition);
    ui->friendSearchEdit->setPlaceholderText("Search");

    //显示登录页面
    m_login_form->show();
    //this->show();

    //编辑FriendList
    layout = new QVBoxLayout();
    layout->setMargin(0);
    layout->addStretch(0);
    wgt = new QWidget();
    wgt->setLayout(layout);
    ui->friendScrollArea->setWidget(wgt);
    ui->friendScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//隐藏横向滚动条

    //创建加好友按钮
    addFriendButton = new QPushButton();
    addFriendButton->setStyleSheet("QPushButton{\
        color: rgb(112, 112, 112);\
        background-color: rgb(240, 240, 240);\
        spacing: 80px;\
        }\
        QPushButton:hover{\
        color: rgb(112, 112, 112);\
        background-color: rgb(219, 219, 219);\
        spacing: 80px;\
        }\
        QPushButton:press{\
        color: rgb(112, 112, 112);\
        background-color: rgb(219, 219, 219);\
        spacing: 80px;\
        }");
    addFriendButton->setFont(QFont("roboto"));
    addFriendButton->setFixedSize(250, 48);
    addFriendButton->setIcon(QIcon(":/src/GUI/icon/addFriend.png"));
    layout->insertWidget(0, addFriendButton);
    addFriendButton->hide();

    //消息框最多100条消息
    ui->msgShowTextEdit->document()->setMaximumBlockCount(100);

    loadConnect();
}

ChatForm::~ChatForm() {
    delete ui;
}

void ChatForm::on_radiobutton_toggled(bool checked){
    m_chosen_friend_button = qobject_cast<FriendButton*>(sender());
    if (checked){
        m_chosen_friend_button->setStyleSheet("QRadioButton{\
                color: rgb(112, 112, 112);\
                background-color: rgb(219, 219, 219);\
                spacing: 100px;\
            }\
            QRadioButton:hover{\
                color: rgb(112, 112, 112);\
                background-color: rgb(219, 219, 219);\
                spacing: 100px;\
            }\
            QRadioButton:press{\
                color: rgb(112, 112, 112);\
                background-color: rgb(219, 219, 219);\
                spacing: 100px;\
            }\
            QRadioButton:indicator{\
                width: 0px;\
                height: 0px;\
                border: none;\
            }");
        m_chosen_friend_button->setIcon(QIcon()); // clear unread icon
        const Friend& this_friend = m_chosen_friend_button->getFriend();
//        qDebug()<<this_friend.friend_nickname<<this_friend.friend_nickname.isNull();
        if(this_friend.friend_nickname == "(null)")
            ui->friendNameLabel->setText(this_friend.friend_name);
        else
            ui->friendNameLabel->setText(this_friend.friend_nickname);

        ui->msgShowTextEdit->clear();
        std::list<Record>::const_iterator p_record = this_friend.friends_record.begin();
        for (; p_record != this_friend.friends_record.end(); p_record++){
            //ui->msgShowTextEdit->append(p_record->record_content);
            if (p_record->from_user_id == m_echo.Me.user_id){
                ui->msgShowTextEdit->append(m_echo.Me.user_name+":");
                qDebug()<<"Msg color show";
                ui->msgShowTextEdit->append("<font color = \"#707070\">"+p_record->record_content+"</font>");
            }
            else{
                if (this_friend.friend_nickname == "(null)"){

                    ui->msgShowTextEdit->append(this_friend.friend_name+":");
                    ui->msgShowTextEdit->append("<font color = \"#4378DD\">"+p_record->record_content+"</font>");
                }
                else{
                    ui->msgShowTextEdit->append(this_friend.friend_nickname+":");
                    ui->msgShowTextEdit->append("<font color = \"#4378DD\">"+p_record->record_content+"</font>");
                }
            }
        }
    }
    else{
        m_chosen_friend_button->setStyleSheet("QRadioButton{\
                color: rgb(112, 112, 112);\
                background-color: rgb(240, 240, 240);\
                spacing: 100px;\
            }\
            QRadioButton:hover{\
                color: rgb(112, 112, 112);\
                background-color: rgb(219, 219, 219);\
                spacing: 100px;\
            }\
            QRadioButton:press{\
                color: rgb(112, 112, 112);\
                background-color: rgb(219, 219, 219);\
                spacing: 100px;\
            }\
            QRadioButton:indicator{\
                width: 0px;\
                height: 0px;\
                border: none;\
            }");
    }
}

void ChatForm::on_sendPushButton_clicked()
{
    int Whisper = 1;
    if (m_friend_list.empty() || m_chosen_friend_button == NULL)return;
    QString str = ui->msgSendTextEdit->toPlainText();
    if (str.isEmpty()){
        return;
    }
    if (ui->whisperCheckBox->isChecked()){ //
        Whisper = -1;
    }

    ui->msgSendTextEdit->clear();
    ui->msgShowTextEdit->append(m_echo.Me.user_name+":");
    qDebug()<<"Msg color show";
    ui->msgShowTextEdit->append("<font color = \"#707070\">"+str+"</font>");
    emit sendMESSAGE(m_chosen_friend_button->getFriend().friend_id, str, Whisper);
}

void ChatForm::loadConnect() {
    //登陆成功->进入聊天界面
    //connect(m_login_form, SIGNAL(onLoginSuccess()), this, SLOT(showChatForm()));
    //点击注册按钮->进入注册页面
    connect(m_login_form, SIGNAL(onSignIn()), m_signin_form, SLOT(showSignInForm()));
    //点击完成注册按钮->进入聊天界面
    //connect(m_signin_form, SIGNAL(finishSignIn()), this, SLOT(showChatForm()));
    //点击注册界面的取消按钮->返回登陆页面
    connect(m_signin_form, SIGNAL(returnToLoginForm()), m_login_form, SLOT(showLoginForm()));


    //载入“更多”按钮
    setMoreButton();
    //点击更多：修改用户名->进入修改用户名界面
    connect(m_changeUserNameAction, SIGNAL(triggered()), m_change_name_form, SLOT(showChangeUserNameForm()));
    //点击更多：修改密码->进入修改密码界面
    connect(m_changePasswordAction, SIGNAL(triggered()), m_change_pwd_form, SLOT(showChangePwdForm()));
    //点击更多：退出登录->返回登陆界面
    connect(m_logOutAction, SIGNAL(triggered()), this, SLOT(closeChatForm()));
    connect(m_logOutAction, SIGNAL(triggered()), m_login_form, SLOT(showLoginForm()));
    connect(m_logOutAction, SIGNAL(triggered()), &m_echo, SLOT(LOGOUT()));
    connect(m_logOutAction, SIGNAL(triggered()), this, SLOT(onLogout()));


    //连接Gao
    //发送登录用户ID、密码
    connect(m_login_form, SIGNAL(getLOGIN(int, QString)), &m_echo, SLOT(LOGIN(int, QString)));
    //发送注册用户名、密码
    connect(m_signin_form, SIGNAL(getREGISTER(QString, QString)), &m_echo, SLOT(REGISTER(QString, QString)));
    //发送新密码、旧密码
    connect(m_change_pwd_form, SIGNAL(getCHANGEPASSWORD(QString, QString)), &m_echo, SLOT(CHANGEPASSWORD(QString, QString)));
    //发送消息
    connect(this, SIGNAL(sendMESSAGE(int, QString, int)), &m_echo, SLOT(MESSAGE(int, QString, int)));
    //发送添加好友申请
    connect(this, SIGNAL(getSENDFRIENDREQUEST(int)), &m_echo, SLOT(SENDFRIENDREQUEST(int)));
    //回复加好友申请
    connect(m_friend_request_form, SIGNAL(getREPLYFRIENDREQUEST(int, int, int, QString)), &m_echo, SLOT(REPLYFRIENDREQUEST(int, int,int, QString)));
    //发送上拉刷新消息申请
    connect(this, SIGNAL(getGETRECORD(int, int)), &m_echo, SLOT(GETRECORD(int, int)));
    //发送更改用户名申请
    connect(m_change_name_form, SIGNAL(getCHANGENAME(QString)), &m_echo, SLOT(CHANGENAME(QString)));
    // 更改用户名后更新chatform显示
    connect(m_change_name_form, SIGNAL(getCHANGENAME(QString)), this, SLOT(onUpdateUsername(QString)));
    // 点击checkbox进入Whisper模式
    connect(this ,SIGNAL(getFrdState(int )), &m_echo, SLOT(FrdState(int )));

    //void getCHANGENICKNAME(int friend_id, QString new_nickname);
    //void getGetfriendlist();
//    void getREPLYFRIENDREQUEST(int to_id, int state);
    void getGETRECORD(int friend_id);

    //接受Gao
    //登陆成功->关闭登陆界面，打开聊天界面
//    connect(&m_echo, SIGNAL(ifLoginSuccess(int)), this, SLOT(showChatForm(int)));
    //登陆成功->动态生成好友列表
    connect(&m_echo, SIGNAL(returnNewFriend(Friend&)), this, SLOT(appendToFriendList(Friend&)));
    //注册成功->关闭注册界面，打开聊天界面
    connect(&m_echo, SIGNAL(ifRegLoginSuccess(int)), this, SLOT(showChatForm(int)));
    //修改密码成功->关闭修改密码界面
    connect(&m_echo, SIGNAL(ifChangePwdSuccess(int)), m_change_pwd_form, SLOT(closeChangePwdForm(int)));
    //有新消息->显示在屏幕上
    connect(&m_echo, SIGNAL(recordReady(int)), this, SLOT(onRecordUpdated(int)));
    //收到好友请求
    connect(&m_echo, SIGNAL(ifYouGetRequestSuccess(int,int, QString)), m_friend_request_form, SLOT(showFriendRequestForm(int, int, QString)));
    // 收到好友在线状态
    connect(&m_echo, SIGNAL(ifFriendOnline(int, int)), this, SLOT(onFriendOnline(int, int)));
    //void ifChangeNameSuccess(int state);
    void ifSendMsgSuccess(int state);
    //void ifSendRequestSuccess(int state);
    void ifAddFriendSuccess(int state, int friend_id);
    void returnFriendList();
    void recordReady(int friend_id);

    //点击添加好友按钮
    connect(addFriendButton, SIGNAL(clicked()), this, SLOT(on_addFriendButton_clicked()));


}

void ChatForm::showChatForm(int state) {
    if(state == 0) {
        m_login_form->m_prompt_form->setPrompt("用户名或密码错误", Lv_ERROR);
    }
    else if(state >= 1) {
        m_login_form->hide();
        m_signin_form->hide();
        qDebug()<<"showChatForm"<<state;
        ui->usernameLabel->setText(m_echo.Me.user_name+"("+QString::number(m_echo.Me.user_id)+")");
        this->show();
    }
}

void ChatForm::appendToFriendList(Friend& frd) {
    qDebug()<<"ChatForm: appendToFriendList"<<frd.friend_id;
    //动态生成好友列表
    FriendButton *fb = new FriendButton(frd);
    // if mxxx == NULL
    fb->setStyleSheet("FriendButton{\
        color: rgb(112, 112, 112);\
        background-color: rgb(240, 240, 240);\
        spacing: 100px;\
    }\
    QRadioButton:hover{\
        color: rgb(112, 112, 112);\
        background-color: rgb(219, 219, 219);\
        spacing: 100px;\
    }\
    QRadioButton:press{\
        color: rgb(112, 112, 112);\
        background-color: rgb(219, 219, 219);\
        spacing: 100px;\
    }\
    QRadioButton:indicator{\
        width: 0px;\
        height: 0px;\
        border: none;\
    }");
    fb->setFixedSize(250, 48);
    fb->setFont(QFont("roboto"));
    if(frd.friend_nickname.isNull())
        fb->setText(frd.friend_nickname);
    else{
        fb->setText(frd.friend_name);
    }
    layout->insertWidget(0, fb);
    m_friend_list.push_back(fb);
    connect(fb, SIGNAL(toggled(bool)), this, SLOT(on_radiobutton_toggled(bool)));
    if (m_friend_list.size() == 1){
        m_chosen_friend_button = m_friend_list.front();
        m_chosen_friend_button->setChecked(true);
    }
}

void ChatForm::closeChatForm() {
    this->hide();
}

void ChatForm::onRecordUpdated(int frd_id){
    std::list<FriendButton*>::iterator iter = m_friend_list.begin();
    for (; iter != m_friend_list.end(); iter++){
        if ((*iter)->getFriend().friend_id != frd_id)continue;
        if (m_chosen_friend_button == (*iter)){
            const Friend& this_friend = m_chosen_friend_button->getFriend();
            if(this_friend.friend_nickname == "(null)")
                ui->friendNameLabel->setText(this_friend.friend_name);
            else
                ui->friendNameLabel->setText(this_friend.friend_nickname);
            ui->msgShowTextEdit->clear();
            std::list<Record>::const_iterator p_record = this_friend.friends_record.begin();
            for (; p_record != this_friend.friends_record.end(); p_record++){
                qDebug() << p_record->record_content;

                if (p_record->from_user_id == m_echo.Me.user_id){
                    ui->msgShowTextEdit->append(m_echo.Me.user_name+":");
                    qDebug()<<"Msg color show";
                    ui->msgShowTextEdit->append("<font color = \"#707070\">"+p_record->record_content+"</font>");
                }
                else{
                    if (this_friend.friend_nickname == "(null)"){

                        ui->msgShowTextEdit->append(this_friend.friend_name+":");
                        ui->msgShowTextEdit->append("<font color = \"#4378DD\">"+p_record->record_content+"</font>");
                    }
                    else{
                        ui->msgShowTextEdit->append(this_friend.friend_nickname+":");
                        ui->msgShowTextEdit->append("<font color = \"#4378DD\">"+p_record->record_content+"</font>");
                    }
                }
            }
        }
        else{
            (*iter)->setIcon(QIcon(":/src/GUI/notice.png"));
        }
    }
}

//void ChatForm::returnToChatForm() {
//    this->show();
//}
void ChatForm::onUpdateUsername(QString newUsername){
    ui->usernameLabel->setText(newUsername);
    return ;
}

void ChatForm::setMoreButton() {
    //设置“更多”按钮
    QMenu *menu = new QMenu();

    //下拉菜单：修改用户名
    m_changeUserNameAction = new QAction(menu);
    m_changeUserNameAction->setText(QObject::tr("Change username"));
    menu->addAction(m_changeUserNameAction);

    //下拉菜单：修改密码
    m_changePasswordAction = new QAction(menu);
    m_changePasswordAction->setText(QObject::tr("Change password"));
    menu->addAction(m_changePasswordAction);

    //下拉菜单：退出登录
    m_logOutAction = new QAction(menu);
    m_logOutAction->setText(QObject::tr("Log out"));
    menu->addAction(m_logOutAction);

    //编辑按钮样式
    ui->moreButton->setStyleSheet("QToolButton::menu-indicator{image:none;}\
QToolButton{\
    image: url(:/src/GUI/more.png);\
    border-style: outset;\
    border: none;\
}\
QToolButton:hover{\
    image: url(:/src/GUI/more_hover.png);\
    border-style: outset;\
    border: none;\
}\
QToolButton:pressed{\
    image: url(:/src/GUI/more.png);\
    border-style: outset;\
    border: none;\
}");
    ui->moreButton->setToolButtonStyle(Qt::ToolButtonTextOnly);
    ui->moreButton->setPopupMode(QToolButton::InstantPopup);
    ui->moreButton->setMenu(menu);
}

void ChatForm::on_closeButton_clicked() {
    this->close();
}

void ChatForm::on_minimizeButton_clicked() {
    this->showMinimized();
}
void ChatForm::searchFriend() {
    addFriendButton->hide();
    //搜索好友,若没有则生成添加按钮
    QRegExp rx;
    rx.setPatternSyntax(QRegExp::RegExp);
    //对大小写字母敏感，即区分大小写
    rx.setCaseSensitivity(Qt::CaseSensitive);
    //匹配格式为所有大小写字母和数字组成的字符串，位数不限
    rx.setPattern(QString("^[0-9]+$"));
    QString searchID = ui->friendSearchEdit->text();
    bool find = false;
    if(rx.exactMatch(searchID)){
        addFriendButton->setText(QString("Add friend to \"") + searchID + QString("\""));
        addFriendButton->show();
    }
    std::list<FriendButton*>::iterator iter = m_friend_list.begin();
    for (; iter != m_friend_list.end(); iter++){
        QString id = QString::number((*iter)->getFriend().friend_id);
        QString username = (*iter)->getFriend().friend_name;
        QString nickname = (*iter)->getFriend().friend_nickname;
        qDebug() << username << id.indexOf(searchID) << username.indexOf(searchID) << nickname.indexOf(searchID);
        if(id.indexOf(searchID) >= 0 || username.indexOf(searchID) >= 0  || nickname.indexOf(searchID) >= 0 ){
            //(*iter)->setStyleSheet("background-color:orange");
            (*iter)->show();
            find = true;
        }
        else{
            (*iter)->hide();
        }
    }
}

void ChatForm::keyPressEvent(QKeyEvent* event){
    if (ui->friendSearchEdit->hasFocus() &&
            (event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return)){

        //qDebug() << "nice";
    }
}

void ChatForm::on_addFriendButton_clicked()
{
    qDebug()<<"on_addFriend";
    //点击加好友按钮
    emit getSENDFRIENDREQUEST(ui->friendSearchEdit->text().toInt());
    addFriendButton->hide();
    std::list<FriendButton*>::iterator iter = m_friend_list.begin();
    for (; iter != m_friend_list.end(); iter++){
        (*iter)->setStyleSheet("FriendButton{\
            color: rgb(112, 112, 112);\
            background-color: rgb(240, 240, 240);\
            spacing: 100px;\
        }\
        QRadioButton:hover{\
            color: rgb(112, 112, 112);\
            background-color: rgb(219, 219, 219);\
            spacing: 100px;\
        }\
        QRadioButton:press{\
            color: rgb(112, 112, 112);\
            background-color: rgb(219, 219, 219);\
            spacing: 100px;\
        }\
        QRadioButton:indicator{\
            width: 0px;\
            height: 0px;\
            border: none;\
        }");
        (*iter)->show();
    }
}


//窗口可拖拽
void ChatForm::mouseMoveEvent(QMouseEvent * event)
{
    if ((event->buttons() == Qt::LeftButton) && left_button_pressed_)
    {
        move(event->globalPos() - last_position_);
    }
}

void ChatForm::mouseReleaseEvent(QMouseEvent *)
{
    left_button_pressed_ = false;
}

void ChatForm::mousePressEvent(QMouseEvent * event)
{
    if (event->buttons() == Qt::LeftButton) {
        left_button_pressed_ = true;
        last_position_ = event->globalPos() - pos();
    }
}

void ChatForm::on_friendSearchEdit_textChanged(const QString &arg1)
{
    searchFriend();
}

void ChatForm::wheelEvent(QWheelEvent* event){
    if (ui->msgShowTextEdit->underMouse() && event->angleDelta().y() > 0){
        const std::list<Record>& records = m_chosen_friend_button->getFriend().friends_record;
        int frd_id = m_chosen_friend_button->getFriend().friend_id;
        if (records.empty()){
            emit getGETRECORD(frd_id,0);
        }
        else{
            emit getGETRECORD(frd_id, records.front().record_id);
        }
    }
}

void ChatForm::onLogout(){
    m_chosen_friend_button = NULL;
    m_friend_list.clear();
//    ui->msgSendTextEdit->clear();
    QList<FriendButton*> btns = wgt->findChildren<FriendButton*>();
    for(auto btn: btns){ delete btn; }
}

void ChatForm::on_whisperCheckBox_clicked()
{
    /*int friend_id = m_chosen_friend_button->getFriend().friend_id;
    qDebug()<<"click checkbox";
    emit getFrdState(friend_id);
    return;*/
}
// slot: get friend online state and show warning
void ChatForm::onFriendOnline(int frd_id, int state){
    qDebug()<<frd_id<<state;
    if (state != 1){
        QMessageBox::warning(NULL, "warning", "friend out of line", QMessageBox::Ok, QMessageBox::Ok);
        ui->whisperCheckBox->setChecked(false);
//        ui->msgShowTextEdit->append("<font color = \"#FFB2B2\">"+QString(" The last message failed to send. ")+"</font>");
    }
    return;

}

void ChatForm::on_whisperCheckBox_toggled(bool checked)
{
    if (!checked)return;
    int friend_id = m_chosen_friend_button->getFriend().friend_id;
    qDebug()<<"click checkbox";
    emit getFrdState(friend_id);
    return;
}


void ChatForm::on_sendFileButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName();
}

