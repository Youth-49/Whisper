/********************************************************************************
** Form generated from reading UI file 'chatform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATFORM_H
#define UI_CHATFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatForm
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *closeButton;
    QPushButton *minimizeButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *usernameLabel;
    QToolButton *moreButton;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *friendSearchEdit;
    QScrollArea *friendScrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_12;
    QLabel *friendNameLabel;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_10;
    QTextEdit *msgShowTextEdit;
    QHBoxLayout *horizontalLayout_8;
    QTextEdit *msgSendTextEdit;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *sendFileButton;
    QCheckBox *whisperCheckBox;
    QPushButton *sendPushButton;

    void setupUi(QMainWindow *ChatForm)
    {
        if (ChatForm->objectName().isEmpty())
            ChatForm->setObjectName(QString::fromUtf8("ChatForm"));
        ChatForm->resize(768, 668);
        ChatForm->setMinimumSize(QSize(768, 668));
        ChatForm->setMaximumSize(QSize(768, 668));
        ChatForm->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(ChatForm);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(768, 668));
        centralwidget->setMaximumSize(QSize(768, 668));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_7 = new QVBoxLayout(centralwidget);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(768, 668));
        widget->setMaximumSize(QSize(768, 668));
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"	background-image: url(:/src/GUI/bgmain.png);	\n"
"}"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 18, 18, 18);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(9, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        closeButton = new QPushButton(widget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setMinimumSize(QSize(16, 16));
        closeButton->setMaximumSize(QSize(16, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Roboto"));
        font.setPointSize(10);
        closeButton->setFont(font);
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

        horizontalLayout_3->addWidget(closeButton);

        minimizeButton = new QPushButton(widget);
        minimizeButton->setObjectName(QString::fromUtf8("minimizeButton"));
        minimizeButton->setMinimumSize(QSize(16, 16));
        minimizeButton->setMaximumSize(QSize(16, 16));
        minimizeButton->setFont(font);
        minimizeButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    image: url(:/src/GUI/min.png);\n"
"    border-style: outset;\n"
"	border: none;\n"
"}\n"
"QPushButton:hover{\n"
"    image: url(:/src/GUI/min_hover.png);\n"
"    border-style: outset;\n"
"	border: none;\n"
"}\n"
"QPushButton:pressed{\n"
"    image: url(:/src/GUI/min_hover.png);\n"
"    border-style: outset;\n"
"	border: none;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(minimizeButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(24, 24, 24, 24);
        usernameLabel = new QLabel(widget);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Roboto"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        usernameLabel->setFont(font1);
        usernameLabel->setStyleSheet(QString::fromUtf8("color: rgb(112, 112, 112);\n"
"border:none;"));
        usernameLabel->setAlignment(Qt::AlignCenter);
        usernameLabel->setMargin(0);

        horizontalLayout_5->addWidget(usernameLabel);

        moreButton = new QToolButton(widget);
        moreButton->setObjectName(QString::fromUtf8("moreButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Roboto"));
        moreButton->setFont(font2);
        moreButton->setCursor(QCursor(Qt::ArrowCursor));
        moreButton->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"    image: url(:/src/GUI/more.png);\n"
"    border-style: outset;\n"
"	border: none;\n"
"}\n"
"QToolButton:hover{\n"
"    image: url(:/src/GUI/more_hover.png);\n"
"    border-style: outset;\n"
"	border: none;\n"
"}\n"
"QToolButton:pressed{\n"
"    image: url(:/src/GUI/more.png);\n"
"    border-style: outset;\n"
"	border: none;\n"
"}\n"
""));

        horizontalLayout_5->addWidget(moreButton);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(16, 9, 16, 9);
        friendSearchEdit = new QLineEdit(widget);
        friendSearchEdit->setObjectName(QString::fromUtf8("friendSearchEdit"));
        friendSearchEdit->setMinimumSize(QSize(0, 24));
        friendSearchEdit->setFont(font);
        friendSearchEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	color: rgb(112, 112, 112);\n"
"	background-color: rgb(219, 219, 219);\n"
"	border: none;\n"
"}\n"
"QLineEdit:focus{\n"
"	color: rgb(112, 112, 112);\n"
"	background-color: rgb(219, 219, 219);\n"
"	border: 2px solid rgb(90, 147, 255);\n"
"}"));

        horizontalLayout_11->addWidget(friendSearchEdit);


        verticalLayout_2->addLayout(horizontalLayout_11);

        friendScrollArea = new QScrollArea(widget);
        friendScrollArea->setObjectName(QString::fromUtf8("friendScrollArea"));
        friendScrollArea->setMinimumSize(QSize(250, 0));
        friendScrollArea->setMaximumSize(QSize(250, 16777215));
        friendScrollArea->setFont(font);
        friendScrollArea->setStyleSheet(QString::fromUtf8("border-style: outset;"));
        friendScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 250, 479));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, -1, 0, -1);
        radioButton_3 = new QRadioButton(scrollAreaWidgetContents);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(radioButton_3->sizePolicy().hasHeightForWidth());
        radioButton_3->setSizePolicy(sizePolicy1);
        radioButton_3->setMinimumSize(QSize(0, 48));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Roboto"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        radioButton_3->setFont(font3);
        radioButton_3->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"	color: rgb(112, 112, 112);\n"
"	background-color: rgb(240, 240, 240);\n"
"	spacing: 85px;\n"
"}\n"
"QRadioButton:hover{\n"
"	color: rgb(112, 112, 112);\n"
"	background-color: rgb(219, 219, 219);\n"
"	spacing: 85px;\n"
"}\n"
"QRadioButton:press{\n"
"	color: rgb(112, 112, 112);\n"
"	background-color: rgb(219, 219, 219);\n"
"	spacing: 100px;\n"
"}\n"
"QRadioButton:indicator{\n"
"	width: 0px;\n"
"	height: 0px;\n"
"	border: none;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/src/GUI/notice.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_3->setIcon(icon);

        verticalLayout_6->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(scrollAreaWidgetContents);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        sizePolicy1.setHeightForWidth(radioButton_4->sizePolicy().hasHeightForWidth());
        radioButton_4->setSizePolicy(sizePolicy1);
        radioButton_4->setMinimumSize(QSize(0, 48));
        radioButton_4->setFont(font3);
        radioButton_4->setStyleSheet(QString::fromUtf8("QRadioButton{\n"
"	color: rgb(112, 112, 112);\n"
"	background-color: rgb(240, 240, 240);\n"
"	spacing: 100px;\n"
"}\n"
"QRadioButton:hover{\n"
"	color: rgb(112, 112, 112);\n"
"	background-color: rgb(219, 219, 219);\n"
"	spacing: 100px;\n"
"}\n"
"QRadioButton:press{\n"
"	color: rgb(112, 112, 112);\n"
"	background-color: rgb(219, 219, 219);\n"
"	spacing: 100px;\n"
"}\n"
"QRadioButton:indicator{\n"
"	width: 0px;\n"
"	height: 0px;\n"
"	border: none;\n"
"}"));

        verticalLayout_6->addWidget(radioButton_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        friendScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(friendScrollArea);

        verticalLayout_2->setStretch(2, 1);

        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(24, 12, 12, 12);
        friendNameLabel = new QLabel(widget);
        friendNameLabel->setObjectName(QString::fromUtf8("friendNameLabel"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Roboto"));
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setWeight(50);
        friendNameLabel->setFont(font4);
        friendNameLabel->setStyleSheet(QString::fromUtf8("color: rgb(112, 112, 112);"));

        horizontalLayout_12->addWidget(friendNameLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(24, 9, 9, 24);
        msgShowTextEdit = new QTextEdit(widget);
        msgShowTextEdit->setObjectName(QString::fromUtf8("msgShowTextEdit"));
        msgShowTextEdit->setFont(font);
        msgShowTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);\n"
"border:none;"));
        msgShowTextEdit->setReadOnly(true);

        horizontalLayout_10->addWidget(msgShowTextEdit);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(24, 9, 9, 0);
        msgSendTextEdit = new QTextEdit(widget);
        msgSendTextEdit->setObjectName(QString::fromUtf8("msgSendTextEdit"));
        msgSendTextEdit->setMaximumSize(QSize(16777215, 120));
        msgSendTextEdit->setFont(font);
        msgSendTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 254, 254);\n"
"border:none;\n"
"color: rgb(112, 112, 112);"));

        horizontalLayout_8->addWidget(msgSendTextEdit);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(9);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        sendFileButton = new QPushButton(widget);
        sendFileButton->setObjectName(QString::fromUtf8("sendFileButton"));
        sendFileButton->setMinimumSize(QSize(25, 25));
        sendFileButton->setStyleSheet(QString::fromUtf8("#sendFileButton{\n"
" image: url(:/src/GUI/icon/send_file.png);\n"
" background-color: rgb(254, 254, 254);\n"
" border:none;\n"
"}\n"
"#sendFileButton:hover{\n"
" image: url(:/src/GUI/icon/send_file_hover.png);\n"
" background-color: rgb(254, 254, 254);\n"
" border:none;\n"
"}\n"
"#sendFileButton:pressed{\n"
" image: url(:/src/GUI/icon/send_file_press.png);\n"
" background-color: rgb(254, 254, 254);\n"
" border:none;\n"
"}"));

        horizontalLayout_7->addWidget(sendFileButton);

        whisperCheckBox = new QCheckBox(widget);
        whisperCheckBox->setObjectName(QString::fromUtf8("whisperCheckBox"));
        whisperCheckBox->setMinimumSize(QSize(25, 25));
        whisperCheckBox->setStyleSheet(QString::fromUtf8("QCheckBox::indicator{\n"
" 	border:none; \n"
" 	width: 25px;\n"
"	height: 25px;\n"
"}\n"
"QCheckBox::indicator:checked{\n"
"	image: url(:/src/GUI/icon/whisper_hover.png);\n"
"}\n"
"QCheckBox::indicator:enabled:unchecked{\n"
"	image: url(:/src/GUI/icon/whisper.png);\n"
"}\n"
"QCheckBox::indicator:enabled:unchecked:hover{\n"
"	image: url(:/src/GUI/icon/whisper_hover.png);\n"
"}"));

        horizontalLayout_7->addWidget(whisperCheckBox);

        sendPushButton = new QPushButton(widget);
        sendPushButton->setObjectName(QString::fromUtf8("sendPushButton"));
        sendPushButton->setMinimumSize(QSize(131, 54));
        sendPushButton->setMaximumSize(QSize(131, 54));
        sendPushButton->setFont(font3);
        sendPushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/src/GUI/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendPushButton->setIcon(icon1);

        horizontalLayout_7->addWidget(sendPushButton);


        verticalLayout_5->addLayout(horizontalLayout_7);

        verticalLayout_5->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout_5);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_7->addWidget(widget);

        ChatForm->setCentralWidget(centralwidget);

        retranslateUi(ChatForm);

        QMetaObject::connectSlotsByName(ChatForm);
    } // setupUi

    void retranslateUi(QMainWindow *ChatForm)
    {
        ChatForm->setWindowTitle(QCoreApplication::translate("ChatForm", "ChatForm", nullptr));
        closeButton->setText(QString());
        minimizeButton->setText(QString());
        usernameLabel->setText(QCoreApplication::translate("ChatForm", "InkosiZhong", nullptr));
        moreButton->setText(QString());
        friendSearchEdit->setText(QString());
        radioButton_3->setText(QCoreApplication::translate("ChatForm", "Mr.Chang", nullptr));
        radioButton_4->setText(QCoreApplication::translate("ChatForm", "Mr.Gao", nullptr));
        friendNameLabel->setText(QString());
        sendFileButton->setText(QString());
        whisperCheckBox->setText(QString());
        sendPushButton->setText(QCoreApplication::translate("ChatForm", "Send", nullptr));
#if QT_CONFIG(shortcut)
        sendPushButton->setShortcut(QCoreApplication::translate("ChatForm", "Ctrl+Return", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class ChatForm: public Ui_ChatForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATFORM_H
