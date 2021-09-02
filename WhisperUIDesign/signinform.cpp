#include "signinform.h"
#include "ui_signinform.h"

SignInForm::SignInForm(Echo& echo, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignInForm),
    m_echo(echo)
{
    //页面设置
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window|Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    m_prompt_form = new PromptForm(this);


    //回车按键绑定
    ui->regButton->setShortcut(Qt::Key_Enter);//将字母区回车键与登录按钮绑定在一起
    ui->regButton->setShortcut(Qt::Key_Return);//将回车键与登录按钮绑定在一起
}

SignInForm::~SignInForm()
{
    delete ui;
}

void SignInForm::showSignInForm()
{
    this->show();
}

void SignInForm::on_closeButton_clicked()
{
    //点击关闭按钮
    m_prompt_form->close();
    this->close();
}


void SignInForm::on_cancelButton_clicked()
{
    //点击取消按钮
    m_prompt_form->close();
    emit returnToLoginForm();
    ui->userNameEdit->clear();
    this->close();
}


void SignInForm::on_regButton_clicked()
{
    //点击注册按钮
    if(regCheck()) {
        emit getREGISTER(userName, setPwd);
//        QMessageBox::information(NULL, "ID", QString::number(m_echo.Me.user_id),
//                                 QMessageBox::Yes, QMessageBox::Yes);
        ui->pwdEdit->clear();
        ui->checkPwdEdit->clear();
        m_prompt_form->close();
    } else {
        m_prompt_form->setPrompt(hintText, Lv_ERROR);
    }
}

bool SignInForm::regCheck()
{
    userName = ui->userNameEdit->text();//用户昵称
    setPwd = ui->pwdEdit->text();//用户密码
    checkPwd = ui->checkPwdEdit->text();//确认密码
    QRegExp rx;
    QMessageBox msgBox;
    bool flag = true;
    if(0 == userName.size())
    {
        hintText = "Username is empty";
        return false;
    }
    if(userName.size() > 10)
    {
        hintText = "Username's length is longer than 10";
        return false;
    }

    rx.setPatternSyntax(QRegExp::RegExp);
    //对大小写字母敏感，即区分大小写
    rx.setCaseSensitivity(Qt::CaseSensitive);
    //匹配格式为所有大小写字母和数字组成的字符串，位数不限
    rx.setPattern(QString("^[A-Za-z0-9]+$"));
    if(setPwd.isEmpty())  //检测密码输入框是不是为空
    {
        hintText = "Please input your password";
        return false;
    }
    else if(!rx.exactMatch(setPwd))
    {
        hintText = "Illegal character in password";
        return false;

    }
    else if(setPwd.size() > 10)
    {
        hintText = "Passord's length is longer than 10";
        return false;

    }
    if(checkPwd.isEmpty())  //检测密码输入框是不是为空
    {
        hintText = "Please input your password again";
        return false;
    }
    if(setPwd.compare(checkPwd))
    {
        hintText = "Passwords are different";
        return false;
    }
    return flag;
}

//窗口可拖拽
void SignInForm::mouseMoveEvent(QMouseEvent * event)
{
    if ((event->buttons() == Qt::LeftButton) && left_button_pressed_)
    {
        move(event->globalPos() - last_position_);
    }
}

void SignInForm::mouseReleaseEvent(QMouseEvent *)
{
    left_button_pressed_ = false;
}

void SignInForm::mousePressEvent(QMouseEvent * event)
{
    if (event->buttons() == Qt::LeftButton) {
        left_button_pressed_ = true;
        last_position_ = event->globalPos() - pos();
    }
}

