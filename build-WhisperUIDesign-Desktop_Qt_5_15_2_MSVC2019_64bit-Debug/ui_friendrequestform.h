/********************************************************************************
** Form generated from reading UI file 'friendrequestform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDREQUESTFORM_H
#define UI_FRIENDREQUESTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriendRequestForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *usernameLabel;
    QLabel *userIDLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *acceptButton;
    QPushButton *rejectButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FriendRequestForm)
    {
        if (FriendRequestForm->objectName().isEmpty())
            FriendRequestForm->setObjectName(QString::fromUtf8("FriendRequestForm"));
        FriendRequestForm->resize(318, 238);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FriendRequestForm->sizePolicy().hasHeightForWidth());
        FriendRequestForm->setSizePolicy(sizePolicy);
        FriendRequestForm->setMinimumSize(QSize(318, 238));
        FriendRequestForm->setMaximumSize(QSize(318, 238));
        QFont font;
        font.setFamily(QString::fromUtf8("Roboto"));
        FriendRequestForm->setFont(font);
        FriendRequestForm->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);"));
        verticalLayout_2 = new QVBoxLayout(FriendRequestForm);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(FriendRequestForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(318, 238));
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"	background-image: url(:/src/GUI/bg300x220.png);\n"
"}\n"
""));
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
        QFont font1;
        font1.setPointSize(10);
        closeButton->setFont(font1);
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

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(48, -1, -1, -1);
        usernameLabel = new QLabel(widget);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Roboto"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        usernameLabel->setFont(font2);
        usernameLabel->setStyleSheet(QString::fromUtf8("color: rgb(112, 112, 112);"));

        horizontalLayout_2->addWidget(usernameLabel);

        userIDLabel = new QLabel(widget);
        userIDLabel->setObjectName(QString::fromUtf8("userIDLabel"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Roboto"));
        font3.setPointSize(10);
        userIDLabel->setFont(font3);
        userIDLabel->setStyleSheet(QString::fromUtf8("color: rgb(112, 112, 112);\n"
""));

        horizontalLayout_2->addWidget(userIDLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(48, -1, -1, -1);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(112, 112, 112);"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        acceptButton = new QPushButton(widget);
        acceptButton->setObjectName(QString::fromUtf8("acceptButton"));
        sizePolicy.setHeightForWidth(acceptButton->sizePolicy().hasHeightForWidth());
        acceptButton->setSizePolicy(sizePolicy);
        acceptButton->setMinimumSize(QSize(100, 54));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Roboto"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        acceptButton->setFont(font4);
        acceptButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    border-image: url(:/src/GUI/short_button.png);\n"
"    color:rgb(254, 254, 254);\n"
"}\n"
"QPushButton:hover{\n"
"    border-image: url(:/src/GUI/short_button_hover.png);\n"
"    color:rgb(254, 254, 254);\n"
"}\n"
"QPushButton:pressed{\n"
"    border-image: url(:/src/GUI/short_button_press.png);\n"
"    color:rgb(254, 254, 254);\n"
"}\n"
""));

        horizontalLayout_5->addWidget(acceptButton);

        rejectButton = new QPushButton(widget);
        rejectButton->setObjectName(QString::fromUtf8("rejectButton"));
        sizePolicy.setHeightForWidth(rejectButton->sizePolicy().hasHeightForWidth());
        rejectButton->setSizePolicy(sizePolicy);
        rejectButton->setMinimumSize(QSize(100, 54));
        rejectButton->setFont(font4);
        rejectButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    border-image: url(:/src/GUI/short_secbutton.png);\n"
"    color:rgb(254, 254, 254);\n"
"}\n"
"QPushButton:hover{\n"
"    border-image: url(:/src/GUI/short_secbutton_hover.png);\n"
"    color:rgb(254, 254, 254);\n"
"}\n"
"QPushButton:pressed{\n"
"    border-image: url(:/src/GUI/short_secbutton_press.png);\n"
"    color:rgb(254, 254, 254);\n"
"}\n"
""));

        horizontalLayout_5->addWidget(rejectButton);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(widget);


        retranslateUi(FriendRequestForm);

        QMetaObject::connectSlotsByName(FriendRequestForm);
    } // setupUi

    void retranslateUi(QWidget *FriendRequestForm)
    {
        FriendRequestForm->setWindowTitle(QCoreApplication::translate("FriendRequestForm", "Form", nullptr));
        closeButton->setText(QString());
        usernameLabel->setText(QCoreApplication::translate("FriendRequestForm", "User", nullptr));
        userIDLabel->setText(QCoreApplication::translate("FriendRequestForm", "2695664247", nullptr));
        label_3->setText(QCoreApplication::translate("FriendRequestForm", "sends you a friend request", nullptr));
        acceptButton->setText(QCoreApplication::translate("FriendRequestForm", "Accept", nullptr));
        rejectButton->setText(QCoreApplication::translate("FriendRequestForm", "Reject", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FriendRequestForm: public Ui_FriendRequestForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDREQUESTFORM_H
