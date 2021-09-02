#ifndef FRIENDREQUESTFORM_H
#define FRIENDREQUESTFORM_H

#include <QWidget>
#include <QMouseEvent>


#include "Echo.h"


namespace Ui {
class FriendRequestForm;
}

class FriendRequestForm : public QWidget
{
    Q_OBJECT

Q_SIGNALS:
    void getREPLYFRIENDREQUEST(int to_id, int state, int request_id, QString frd_name);

public:
    explicit FriendRequestForm(Echo& echo, QWidget *parent = nullptr);
    ~FriendRequestForm();
    void showFriendRequestForm();
    FriendRequestForm(const FriendRequestForm& frf);
    int to_id;
    int request_id;
    QString frd_name;

public slots:
    void showFriendRequestForm(int from_id, int request_id, QString frd_name);

private slots:
    void on_closeButton_clicked();

    void on_acceptButton_clicked();

    void on_rejectButton_clicked();

private:
    Ui::FriendRequestForm *ui;
    Echo& m_echo;

    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *event);
    QPoint last_point_;             //记录放大之前的位置
    QPoint last_position_;          //窗口上一次的位置
    bool left_button_pressed_ = false;   //鼠标左键按下
};

#endif // FRIENDREQUESTFORM_H
