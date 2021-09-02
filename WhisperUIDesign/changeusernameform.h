#ifndef CHANGEUSERNAMEFORM_H
#define CHANGEUSERNAMEFORM_H

#include <QWidget>
#include <QMouseEvent>


#include "Echo.h"
#include "promptform.h"


namespace Ui {
class ChangeUsernameForm;
}

class ChangeUsernameForm : public QWidget
{
    Q_OBJECT

public:
    explicit ChangeUsernameForm(Echo& echo, QWidget *parent = nullptr);
    ~ChangeUsernameForm();
    PromptForm* m_prompt_form;
    QString hintText;
    bool changeUserNameCheck();
    QString newUserName;

Q_SIGNALS:
    void getCHANGENAME(QString new_name);


public slots:
    void showChangeUserNameForm();
    void closeChangeUserNameForm(int state);

private slots:
    void on_closeButton_clicked();

    void on_cancelButton_clicked();

    void on_confirmButton_clicked();

private:
    Ui::ChangeUsernameForm *ui;
    Echo& m_echo;

    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *event);
    QPoint last_point_;             //记录放大之前的位置
    QPoint last_position_;          //窗口上一次的位置
    bool left_button_pressed_ = false;   //鼠标左键按下
};

#endif // CHANGEUSERNAMEFORM_H
