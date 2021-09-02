#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QWidget>
#include <QMessageBox>
#include <QDebug>
#include <QMouseEvent>


#include "Echo.h"
#include "DataClass.h"
#include "promptform.h"


namespace Ui {
class LoginForm;
}

class LoginForm : public QWidget
{
    Q_OBJECT

public:
    explicit LoginForm(Echo& echo, QWidget *parent = nullptr);
    ~LoginForm();
    bool LoginCheck();
    QString userID;
    QString pwd;
    QString hintText;
    PromptForm* m_prompt_form;


Q_SIGNALS:
    void onLoginSuccess();
    void onSignIn();

    void getLOGIN(int user_id, QString password);


public slots:
    void showLoginForm();

private slots:
    void on_closeButton_clicked();

    void on_loginButton_clicked();

    void on_regButton_clicked();

private:
    Ui::LoginForm *ui;
    Echo& m_echo;

    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *event);
    QPoint last_point_;             //记录放大之前的位置
    QPoint last_position_;          //窗口上一次的位置
    bool left_button_pressed_ = false;   //鼠标左键按下
};

#endif // LOGINFORM_H
