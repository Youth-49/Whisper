#ifndef CHANGEPASSWORDFORM_H
#define CHANGEPASSWORDFORM_H

#include <QWidget>
#include <QMessageBox>
#include <QThread>
#include <QMouseEvent>


#include "Echo.h"
#include "promptform.h"


namespace Ui {
class ChangePasswordForm;
}

class ChangePasswordForm : public QWidget
{
    Q_OBJECT

public:
    explicit ChangePasswordForm(Echo& echo, QWidget *parent = nullptr);
    ~ChangePasswordForm();
    bool changePwdCheck();
    QString oldPwd;
    QString newPwd;
    QString checkPwd;
    PromptForm* m_prompt_form;
    QString hintText;

Q_SIGNALS:
    void getCHANGEPASSWORD(QString pre_password, QString new_password);


public slots:
    void showChangePwdForm();
    void closeChangePwdForm(int state);


private slots:
    void on_closeButton_clicked();

    void on_cancelButton_clicked();

    void on_confirmButton_clicked();

private:
    Ui::ChangePasswordForm *ui;
    Echo& m_echo;

    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *event);
    QPoint last_point_;             //记录放大之前的位置
    QPoint last_position_;          //窗口上一次的位置
    bool left_button_pressed_ = false;   //鼠标左键按下
};

#endif // CHANGEPASSWORDFORM_H
