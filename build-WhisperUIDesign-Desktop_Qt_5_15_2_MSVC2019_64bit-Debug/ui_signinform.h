/********************************************************************************
** Form generated from reading UI file 'signinform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNINFORM_H
#define UI_SIGNINFORM_H

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

class Ui_SignInForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *userNameEdit;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *pwdEdit;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *checkPwdEdit;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *regButton;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *cancelButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *SignInForm)
    {
        if (SignInForm->objectName().isEmpty())
            SignInForm->setObjectName(QString::fromUtf8("SignInForm"));
        SignInForm->resize(318, 508);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SignInForm->sizePolicy().hasHeightForWidth());
        SignInForm->setSizePolicy(sizePolicy);
        SignInForm->setMinimumSize(QSize(318, 508));
        SignInForm->setMaximumSize(QSize(318, 508));
        QFont font;
        font.setFamily(QString::fromUtf8("Roboto"));
        SignInForm->setFont(font);
        SignInForm->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);"));
        verticalLayout_2 = new QVBoxLayout(SignInForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(SignInForm);
        widget->setObjectName(QString::fromUtf8("widget"));
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
"    image: url(:/src/GUI/close.png);\n"
"    border-style: outset;\n"
"}\n"
"QPushButton:hover{\n"
"    image: url(:/src/GUI/close_hover.png);\n"
"    border-style: outset;\n"
"}\n"
"QPushButton:pressed{\n"
"    image: url(:/src/GUI/close_hover.png);\n"
"    border-style: outset;\n"
"}\n"
""));

        horizontalLayout_7->addWidget(closeButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

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
        userNameEdit = new QLineEdit(widget);
        userNameEdit->setObjectName(QString::fromUtf8("userNameEdit"));
        sizePolicy.setHeightForWidth(userNameEdit->sizePolicy().hasHeightForWidth());
        userNameEdit->setSizePolicy(sizePolicy);
        userNameEdit->setMinimumSize(QSize(186, 40));
        userNameEdit->setMaximumSize(QSize(186, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Roboto"));
        font2.setPointSize(12);
        userNameEdit->setFont(font2);
        userNameEdit->setStyleSheet(QString::fromUtf8("background-image: url(:/src/GUI/input.png);\n"
"border-style: outset;\n"
"color: rgb(112, 112, 112);"));
        userNameEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(userNameEdit);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

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

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(48, -1, -1, -1);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(112, 112, 112);"));

        horizontalLayout_8->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        checkPwdEdit = new QLineEdit(widget);
        checkPwdEdit->setObjectName(QString::fromUtf8("checkPwdEdit"));
        sizePolicy.setHeightForWidth(checkPwdEdit->sizePolicy().hasHeightForWidth());
        checkPwdEdit->setSizePolicy(sizePolicy);
        checkPwdEdit->setMinimumSize(QSize(186, 40));
        checkPwdEdit->setMaximumSize(QSize(186, 40));
        checkPwdEdit->setFont(font2);
        checkPwdEdit->setStyleSheet(QString::fromUtf8("background-image: url(:/src/GUI/input.png);\n"
"border-style: outset;\n"
"color: rgb(112, 112, 112);"));
        checkPwdEdit->setEchoMode(QLineEdit::Password);
        checkPwdEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(checkPwdEdit);


        verticalLayout->addLayout(horizontalLayout_9);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        regButton = new QPushButton(widget);
        regButton->setObjectName(QString::fromUtf8("regButton"));
        sizePolicy.setHeightForWidth(regButton->sizePolicy().hasHeightForWidth());
        regButton->setSizePolicy(sizePolicy);
        regButton->setMinimumSize(QSize(131, 54));
        regButton->setFont(font1);
        regButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_5->addWidget(regButton);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        sizePolicy.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy);
        cancelButton->setMinimumSize(QSize(70, 17));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Roboto"));
        font3.setPointSize(10);
        font3.setUnderline(true);
        cancelButton->setFont(font3);
        cancelButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color: rgb(112, 112, 112);\n"
"    background-color: rgb(240, 240, 240);\n"
"    border-style: outset;\n"
"}\n"
"QPushButton:hover{\n"
"    color: rgb(90, 147, 255);\n"
"    background-color: rgb(240, 240, 240);\n"
"    border-style: outset;\n"
"}\n"
"QPushButton:pressed{\n"
"    color:rgb(67, 120, 221);\n"
"    background-color: rgb(240, 240, 240);\n"
"    border-style: outset;\n"
"}\n"
""));

        horizontalLayout_6->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addWidget(widget);


        retranslateUi(SignInForm);

        QMetaObject::connectSlotsByName(SignInForm);
    } // setupUi

    void retranslateUi(QWidget *SignInForm)
    {
        SignInForm->setWindowTitle(QCoreApplication::translate("SignInForm", "Form", nullptr));
        closeButton->setText(QString());
        label_2->setText(QCoreApplication::translate("SignInForm", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("SignInForm", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("SignInForm", "Check Password", nullptr));
        regButton->setText(QCoreApplication::translate("SignInForm", "Register", nullptr));
        cancelButton->setText(QCoreApplication::translate("SignInForm", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignInForm: public Ui_SignInForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNINFORM_H
