/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *userIDEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *pwdEdit;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *loginButton;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *regButton;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QString::fromUtf8("LoginForm"));
        LoginForm->resize(318, 508);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginForm->sizePolicy().hasHeightForWidth());
        LoginForm->setSizePolicy(sizePolicy);
        LoginForm->setMinimumSize(QSize(318, 508));
        LoginForm->setMaximumSize(QSize(318, 508));
        QFont font;
        font.setFamily(QString::fromUtf8("Roboto"));
        LoginForm->setFont(font);
        LoginForm->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);"));
        verticalLayout_2 = new QVBoxLayout(LoginForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(LoginForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(318, 508));
        widget->setMaximumSize(QSize(318, 508));
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"	background-image: url(:/src/GUI/bg300x490.png);\n"
"}"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(18, 18, 18, 18);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        closeButton = new QPushButton(widget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        sizePolicy.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy);
        closeButton->setMinimumSize(QSize(16, 16));
        closeButton->setMaximumSize(QSize(16, 16));
        closeButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	image: url(:/src/GUI/close.png);\n"
"	border-style: outset;\n"
"}\n"
"QPushButton:hover{\n"
"	image: url(:/src/GUI/close_hover.png);\n"
"	border-style: outset;\n"
"}\n"
"QPushButton:pressed{\n"
"	image: url(:/src/GUI/close_hover.png);\n"
"	border-style: outset;\n"
"}\n"
""));

        horizontalLayout_7->addWidget(closeButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/src/GUI/icon.png")));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(48, -1, -1, -1);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Roboto"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(112, 112, 112);"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        userIDEdit = new QLineEdit(widget);
        userIDEdit->setObjectName(QString::fromUtf8("userIDEdit"));
        sizePolicy.setHeightForWidth(userIDEdit->sizePolicy().hasHeightForWidth());
        userIDEdit->setSizePolicy(sizePolicy);
        userIDEdit->setMinimumSize(QSize(186, 40));
        userIDEdit->setMaximumSize(QSize(186, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Roboto"));
        font2.setPointSize(12);
        userIDEdit->setFont(font2);
        userIDEdit->setStyleSheet(QString::fromUtf8("background-image: url(:/src/GUI/input.png);\n"
"border-style: outset;\n"
"color: rgb(112, 112, 112);"));
        userIDEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(userIDEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(48, -1, -1, -1);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(112, 112, 112);"));

        horizontalLayout_3->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pwdEdit = new QLineEdit(widget);
        pwdEdit->setObjectName(QString::fromUtf8("pwdEdit"));
        sizePolicy.setHeightForWidth(pwdEdit->sizePolicy().hasHeightForWidth());
        pwdEdit->setSizePolicy(sizePolicy);
        pwdEdit->setMinimumSize(QSize(186, 40));
        pwdEdit->setMaximumSize(QSize(186, 40));
        pwdEdit->setFont(font2);
        pwdEdit->setStyleSheet(QString::fromUtf8("background-image: url(:/src/GUI/input.png);\n"
"border-style: outset;\n"
"color: rgb(112, 112, 112);"));
        pwdEdit->setEchoMode(QLineEdit::Password);
        pwdEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(pwdEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        loginButton = new QPushButton(widget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        sizePolicy.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy);
        loginButton->setMinimumSize(QSize(131, 54));
        loginButton->setFont(font1);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/src/GUI/button.png);\n"
"	color:rgb(254, 254, 254);\n"
"}\n"
"QPushButton:hover{\n"
"	border-image: url(:/src/GUI/button_hover.png);\n"
"	color:rgb(254, 254, 254);\n"
"}\n"
"QPushButton:pressed{\n"
"	border-image: url(:/src/GUI/button_press.png);\n"
"	color:rgb(254, 254, 254);\n"
"}\n"
""));

        horizontalLayout_5->addWidget(loginButton);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        regButton = new QPushButton(widget);
        regButton->setObjectName(QString::fromUtf8("regButton"));
        sizePolicy.setHeightForWidth(regButton->sizePolicy().hasHeightForWidth());
        regButton->setSizePolicy(sizePolicy);
        regButton->setMinimumSize(QSize(70, 17));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Roboto"));
        font3.setPointSize(10);
        font3.setUnderline(true);
        regButton->setFont(font3);
        regButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(112, 112, 112);\n"
"	background-color: rgb(240, 240, 240);\n"
"	border-style: outset;\n"
"}\n"
"QPushButton:hover{\n"
"	color: rgb(90, 147, 255);\n"
"	background-color: rgb(240, 240, 240);\n"
"	border-style: outset;\n"
"}\n"
"QPushButton:pressed{\n"
"	color:rgb(67, 120, 221);\n"
"	background-color: rgb(240, 240, 240);\n"
"	border-style: outset;\n"
"}\n"
""));

        horizontalLayout_6->addWidget(regButton);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);


        verticalLayout_2->addWidget(widget);


        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QWidget *LoginForm)
    {
        LoginForm->setWindowTitle(QCoreApplication::translate("LoginForm", "Form", nullptr));
        closeButton->setText(QString());
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("LoginForm", "Account", nullptr));
        label_4->setText(QCoreApplication::translate("LoginForm", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginForm", "Login", nullptr));
        regButton->setText(QCoreApplication::translate("LoginForm", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
