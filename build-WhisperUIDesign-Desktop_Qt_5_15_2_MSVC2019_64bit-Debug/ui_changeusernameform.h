/********************************************************************************
** Form generated from reading UI file 'changeusernameform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEUSERNAMEFORM_H
#define UI_CHANGEUSERNAMEFORM_H

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

class Ui_ChangeUsernameForm
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
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *newUserNameEdit;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *confirmButton;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *cancelButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ChangeUsernameForm)
    {
        if (ChangeUsernameForm->objectName().isEmpty())
            ChangeUsernameForm->setObjectName(QString::fromUtf8("ChangeUsernameForm"));
        ChangeUsernameForm->resize(318, 338);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ChangeUsernameForm->sizePolicy().hasHeightForWidth());
        ChangeUsernameForm->setSizePolicy(sizePolicy);
        ChangeUsernameForm->setMinimumSize(QSize(318, 338));
        ChangeUsernameForm->setMaximumSize(QSize(318, 338));
        QFont font;
        font.setFamily(QString::fromUtf8("Roboto"));
        ChangeUsernameForm->setFont(font);
        ChangeUsernameForm->setStyleSheet(QString::fromUtf8("color: rgb(240, 240, 240);"));
        verticalLayout_2 = new QVBoxLayout(ChangeUsernameForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(ChangeUsernameForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"	background-image: url(:/src/GUI/bg300x320.png);\n"
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
        newUserNameEdit = new QLineEdit(widget);
        newUserNameEdit->setObjectName(QString::fromUtf8("newUserNameEdit"));
        sizePolicy.setHeightForWidth(newUserNameEdit->sizePolicy().hasHeightForWidth());
        newUserNameEdit->setSizePolicy(sizePolicy);
        newUserNameEdit->setMinimumSize(QSize(186, 40));
        newUserNameEdit->setMaximumSize(QSize(186, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Roboto"));
        font2.setPointSize(12);
        newUserNameEdit->setFont(font2);
        newUserNameEdit->setStyleSheet(QString::fromUtf8("background-image: url(:/src/GUI/input.png);\n"
"border-style: outset;\n"
"color: rgb(112, 112, 112);"));
        newUserNameEdit->setEchoMode(QLineEdit::Normal);
        newUserNameEdit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(newUserNameEdit);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        confirmButton = new QPushButton(widget);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        sizePolicy.setHeightForWidth(confirmButton->sizePolicy().hasHeightForWidth());
        confirmButton->setSizePolicy(sizePolicy);
        confirmButton->setMinimumSize(QSize(131, 54));
        confirmButton->setFont(font1);
        confirmButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    border-image: url(:/src/GUI/button.png);\n"
"    color:rgb(254, 254, 254);\n"
"}\n"
"QPushButton:hover{\n"
"    border-image: url(:/src/GUI/button_hover.png);\n"
"    color:rgb(254, 254, 254);\n"
"}\n"
"QPushButton:pressed{\n"
"    border-image: url(:/src/GUI/button_press.png);\n"
"    color:rgb(254, 254, 254);\n"
"}\n"
""));

        horizontalLayout_5->addWidget(confirmButton);


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

        verticalSpacer = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(widget);


        retranslateUi(ChangeUsernameForm);

        QMetaObject::connectSlotsByName(ChangeUsernameForm);
    } // setupUi

    void retranslateUi(QWidget *ChangeUsernameForm)
    {
        ChangeUsernameForm->setWindowTitle(QCoreApplication::translate("ChangeUsernameForm", "Form", nullptr));
        closeButton->setText(QString());
        label_2->setText(QCoreApplication::translate("ChangeUsernameForm", "New Username", nullptr));
        confirmButton->setText(QCoreApplication::translate("ChangeUsernameForm", "Confirm", nullptr));
        cancelButton->setText(QCoreApplication::translate("ChangeUsernameForm", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeUsernameForm: public Ui_ChangeUsernameForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEUSERNAMEFORM_H
