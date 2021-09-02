#include "changeusernameform.h"
#include "ui_changeusernameform.h"

ChangeUsernameForm::ChangeUsernameForm(Echo& echo, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChangeUsernameForm),
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

ChangeUsernameForm::~ChangeUsernameForm()
{
    delete ui;
}

void ChangeUsernameForm::showChangeUserNameForm() {
    this->show();
}

void ChangeUsernameForm::on_closeButton_clicked() {
    //点击关闭按钮
    m_prompt_form->close();
    this->close();
}



void ChangeUsernameForm::on_cancelButton_clicked() {
    //点击取消按钮
    m_prompt_form->close();
    this->close();
}

void ChangeUsernameForm::closeChangeUserNameForm(int state) {
    if(state == 1) {
        m_prompt_form->setPrompt("Change username successfully", Lv_HINT);
        QThread::sleep(2);
        m_prompt_form->close();
        this->close();
    }
    //else if(state == -1)
}

bool ChangeUsernameForm::changeUserNameCheck()
{
    newUserName = ui->newUserNameEdit->text();//用户新用户名
    QMessageBox msgBox;
    bool flag = true;

    if(0 == newUserName.size())
    {
        hintText = "New username is empty";
        return false;
    }
    if(newUserName.size() > 10)
    {
        hintText = "New username's length is longer than 10";
        return false;
    }
    return flag;
}

void ChangeUsernameForm::on_confirmButton_clicked() {
    //点击确认提交按钮
    if(changeUserNameCheck()) {
//        qDebug()<<"!!!!!!!!!!!!!!!!!!";
        m_echo.Me.user_name = newUserName;
        emit getCHANGENAME(newUserName);
        m_prompt_form->close();
    } else {
        m_prompt_form->setPrompt(hintText, Lv_ERROR);
    }
}

//窗口可拖拽
void ChangeUsernameForm::mouseMoveEvent(QMouseEvent * event)
{
    if ((event->buttons() == Qt::LeftButton) && left_button_pressed_)
    {
        move(event->globalPos() - last_position_);
    }
}

void ChangeUsernameForm::mouseReleaseEvent(QMouseEvent *)
{
    left_button_pressed_ = false;
}

void ChangeUsernameForm::mousePressEvent(QMouseEvent * event)
{
    if (event->buttons() == Qt::LeftButton) {
        left_button_pressed_ = true;
        last_position_ = event->globalPos() - pos();
    }
}
