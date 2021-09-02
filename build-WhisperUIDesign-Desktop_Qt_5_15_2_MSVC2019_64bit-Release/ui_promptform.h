/********************************************************************************
** Form generated from reading UI file 'promptform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMPTFORM_H
#define UI_PROMPTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PromptForm
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *prompt_label;

    void setupUi(QWidget *PromptForm)
    {
        if (PromptForm->objectName().isEmpty())
            PromptForm->setObjectName(QString::fromUtf8("PromptForm"));
        PromptForm->resize(318, 57);
        PromptForm->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(PromptForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(PromptForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 13);
        prompt_label = new QLabel(widget);
        prompt_label->setObjectName(QString::fromUtf8("prompt_label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Roboto"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        prompt_label->setFont(font);
        prompt_label->setStyleSheet(QString::fromUtf8("color: rgb(82, 82, 82);"));
        prompt_label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(prompt_label);


        verticalLayout->addWidget(widget);


        retranslateUi(PromptForm);

        QMetaObject::connectSlotsByName(PromptForm);
    } // setupUi

    void retranslateUi(QWidget *PromptForm)
    {
        PromptForm->setWindowTitle(QCoreApplication::translate("PromptForm", "Form", nullptr));
        prompt_label->setText(QCoreApplication::translate("PromptForm", "Hint: Prompt Here", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PromptForm: public Ui_PromptForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMPTFORM_H
