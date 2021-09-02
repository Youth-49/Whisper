#ifndef SIGNINFORM_H
#define SIGNINFORM_H

#include <QWidget>
#include <QMessageBox>
#include <QMouseEvent>


#include "Echo.h"
#include "promptform.h"

namespace Ui {
class SignInForm;
}

class SignInForm : public QWidget
{
    Q_OBJECT

public:
    explicit SignInForm(Echo& echo, QWidget *parent = nullptr);
    ~SignInForm();
    bool regCheck();
    QString userName;
    QString setPwd;
    QString checkPwd;

Q_SIGNALS:
    void returnToLoginForm();
    void finishSignIn();
    void getREGISTER(QString user_name, QString password);

public slots:
    void showSignInForm();


private slots:
    void on_closeButton_clicked();

    void on_cancelButton_clicked();

    void on_regButton_clicked();

private:
    Ui::SignInForm *ui;
    Echo& m_echo;
    QString hintText;
    PromptForm* m_prompt_form;

    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *event);
    QPoint last_point_;             //记录放大之前的位置
    QPoint last_position_;          //窗口上一次的位置
    bool left_button_pressed_ = false;   //鼠标左键按下

};

#endif // SIGNINFORM_H
