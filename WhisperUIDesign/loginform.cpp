#include "loginform.h"
#include "ui_loginform.h"

LoginForm::LoginForm(Echo& echo, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginForm),
    m_echo(echo)
{
    //页面设置
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window|Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    m_prompt_form = new PromptForm(this);

    // loginform->show();
    //show();
    //m_prompt_form->setPrompt(hintText, Lv_ERROR);

    //回车按键绑定
    ui->loginButton->setShortcut(Qt::Key_Enter);//将字母区回车键与登录按钮绑定在一起
    ui->loginButton->setShortcut(Qt::Key_Return);//将回车键与登录按钮绑定在一起
}

LoginForm::~LoginForm()
{
    delete m_prompt_form;
    delete ui;
}

void LoginForm::on_closeButton_clicked() {
    m_prompt_form->close();
    this->close();
}

void LoginForm::showLoginForm() {
    qDebug()<<"showLoginForm again";
    this->show();
}

bool LoginForm::LoginCheck() {
    //用户ID、密码正确性判断
    bool flag = true;
    userID = ui->userIDEdit->text();//用户昵称
    pwd = ui->pwdEdit->text();      //用户密码
    QRegExp rx;
    QMessageBox msgBox;


    rx.setPatternSyntax(QRegExp::RegExp);
    //对大小写字母敏感，即区分大小写
    rx.setCaseSensitivity(Qt::CaseSensitive);
    //匹配格式为所有大小写字母和数字组成的字符串，位数不限
    rx.setPattern(QString("^[0-9]+$"));

    if(userID.size() == 0)
    {
        hintText = "Please input userID";
        return false;
    }
    else if(!rx.exactMatch(userID))
    {
        hintText = "UserID can only include numbers";
        return false;
    }

    rx.setPatternSyntax(QRegExp::RegExp);
    //对大小写字母敏感，即区分大小写
    rx.setCaseSensitivity(Qt::CaseSensitive);
    //匹配格式为所有大小写字母和数字组成的字符串，位数不限
    rx.setPattern(QString("^[A-Za-z0-9]+$"));
    if(pwd.isEmpty())
    {
        hintText = "Please input your passord";
        return false;
    }
    else if(pwd.length() > 10)
    {
        hintText = "Passord's length is longer than 10";
        return false;
    }
    else if(!rx.exactMatch(pwd))
    {
        hintText = "Illegal character in password";
        return false;
    }
    return flag;
}

void LoginForm::on_loginButton_clicked(){
    qDebug()<<"click buttom";
    //点击登录按钮
    if(LoginCheck()) {
        qDebug()<<"login check";
        emit getLOGIN(userID.toInt(), pwd);
        m_prompt_form->close();
        //qDebug() << "getLOGIN SUCCESS ";
    } else {
        m_prompt_form->setPrompt(hintText, Lv_ERROR);
    }
}

void LoginForm::on_regButton_clicked() {
    //点击注册按钮
    m_prompt_form->close();
    emit onSignIn();
    this->hide();
}


//窗口可拖拽
void LoginForm::mouseMoveEvent(QMouseEvent * event)
{
    if ((event->buttons() == Qt::LeftButton) && left_button_pressed_)
    {
        move(event->globalPos() - last_position_);
    }
}

void LoginForm::mouseReleaseEvent(QMouseEvent *)
{
    left_button_pressed_ = false;
}

void LoginForm::mousePressEvent(QMouseEvent * event)
{
    if (event->buttons() == Qt::LeftButton) {
        left_button_pressed_ = true;
        last_position_ = event->globalPos() - pos();
    }
}
