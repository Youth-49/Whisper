#include "changepasswordform.h"
#include "ui_changepasswordform.h"

ChangePasswordForm::ChangePasswordForm(Echo& echo, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChangePasswordForm),
    m_echo(echo)
{
    //页面设置
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window|Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    m_prompt_form = new PromptForm(this);

    //回车按键绑定
    ui->confirmButton->setShortcut(Qt::Key_Enter);//将字母区回车键与登录按钮绑定在一起
    ui->confirmButton->setShortcut(Qt::Key_Return);//将回车键与登录按钮绑定在一起
}

ChangePasswordForm::~ChangePasswordForm()
{
    delete ui;
}

void ChangePasswordForm::on_closeButton_clicked() {
    //点击关闭按钮
    m_prompt_form->close();
    this->close();
}

void ChangePasswordForm::showChangePwdForm() {
    this->show();
}

void ChangePasswordForm::closeChangePwdForm(int state) {
    if(state == 1) {
        m_prompt_form->setPrompt("Change password successfully", Lv_HINT);
        QThread::sleep(2);
        m_prompt_form->close();
        this->close();
    }
    //else if(state == -1)
}

bool ChangePasswordForm::changePwdCheck()
{
    oldPwd = ui->oldPwdEdit->text();//用户昵称
    newPwd = ui->newPwdEdit->text();//用户密码
    checkPwd = ui->checkPwdEdit->text();//确认密码
    QRegExp rx;
    QMessageBox msgBox;
    bool flag = true;

    rx.setPatternSyntax(QRegExp::RegExp);
    //对大小写字母敏感，即区分大小写
    rx.setCaseSensitivity(Qt::CaseSensitive);
    //匹配格式为所有大小写字母和数字组成的字符串，位数不限
    rx.setPattern(QString("^[A-Za-z0-9]+$"));
    if(0 == oldPwd.size())
    {
        hintText = "Old passord is empty";
        return false;
    }
    if(oldPwd.size() > 10)
    {
        hintText = "Old password's length is longer than 10";
        return false;
    }
    else if(!rx.exactMatch(oldPwd))
    {
        hintText = "Illegal character in old password";
        return false;
    }

    if(newPwd.isEmpty())
    {
        hintText = "New password is empty";
        return false;
    }
    else if(!rx.exactMatch(newPwd))
    {
        hintText = "Illegal character in new password";
        return false;

    }
    else if(newPwd.size() > 10)
    {
        hintText = "New password's length is longer than 10";
        return false;

    }
    if(newPwd.isEmpty())  //检测密码输入框是不是为空
    {
        hintText = "New password is empty";
        return false;
    }
    if(newPwd.compare(checkPwd))
    {
        hintText = "New passwords is different";
        return false;
    }
    return flag;
}

void ChangePasswordForm::on_cancelButton_clicked() {
    //点击取消按钮
    m_prompt_form->close();
    this->close();
}


void ChangePasswordForm::on_confirmButton_clicked() {
    //点击确认提交按钮
    if(changePwdCheck()) {
        emit getCHANGEPASSWORD(oldPwd, newPwd);
        m_prompt_form->close();
    } else {
        m_prompt_form->setPrompt(hintText, Lv_ERROR);
    }
}

//窗口可拖拽
void ChangePasswordForm::mouseMoveEvent(QMouseEvent * event)
{
    if ((event->buttons() == Qt::LeftButton) && left_button_pressed_)
    {
        move(event->globalPos() - last_position_);
    }
}

void ChangePasswordForm::mouseReleaseEvent(QMouseEvent *)
{
    left_button_pressed_ = false;
}

void ChangePasswordForm::mousePressEvent(QMouseEvent * event)
{
    if (event->buttons() == Qt::LeftButton) {
        left_button_pressed_ = true;
        last_position_ = event->globalPos() - pos();
    }
}
