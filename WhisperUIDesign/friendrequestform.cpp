#include "friendrequestform.h"
#include "ui_friendrequestform.h"

FriendRequestForm::FriendRequestForm(Echo& echo, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FriendRequestForm),
    m_echo(echo)
{
    //页面设置
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window|Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
}

FriendRequestForm::~FriendRequestForm() {
    delete ui;
}

void FriendRequestForm::showFriendRequestForm() {
    this->show();
}

void FriendRequestForm::on_closeButton_clicked() {
    this->hide();
}

void FriendRequestForm::showFriendRequestForm(int from_id, int request_id, QString frd_name)
{
    ui->usernameLabel->setText(frd_name);
    ui->userIDLabel->setText(QString::number(from_id));
    to_id = from_id;
    this->request_id = request_id;
    this->frd_name = frd_name;
    this->show();
}


void FriendRequestForm::on_acceptButton_clicked()
{
    this->hide();
    emit getREPLYFRIENDREQUEST(to_id, 1, request_id, frd_name);
}


void FriendRequestForm::on_rejectButton_clicked()
{
    this->hide();
    emit getREPLYFRIENDREQUEST(to_id, -1, request_id, frd_name);
}

//窗口可拖拽
void FriendRequestForm::mouseMoveEvent(QMouseEvent * event)
{
    if ((event->buttons() == Qt::LeftButton) && left_button_pressed_)
    {
        move(event->globalPos() - last_position_);
    }
}

void FriendRequestForm::mouseReleaseEvent(QMouseEvent *)
{
    left_button_pressed_ = false;
}

void FriendRequestForm::mousePressEvent(QMouseEvent * event)
{
    if (event->buttons() == Qt::LeftButton) {
        left_button_pressed_ = true;
        last_position_ = event->globalPos() - pos();
    }
}
