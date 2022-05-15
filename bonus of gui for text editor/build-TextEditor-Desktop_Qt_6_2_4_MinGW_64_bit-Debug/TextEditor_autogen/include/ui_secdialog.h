/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit_Write;
    QPushButton *pushButton_write;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QString::fromUtf8("SecDialog"));
        SecDialog->resize(764, 576);
        verticalLayout_2 = new QVBoxLayout(SecDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plainTextEdit_Write = new QPlainTextEdit(SecDialog);
        plainTextEdit_Write->setObjectName(QString::fromUtf8("plainTextEdit_Write"));

        verticalLayout->addWidget(plainTextEdit_Write);

        pushButton_write = new QPushButton(SecDialog);
        pushButton_write->setObjectName(QString::fromUtf8("pushButton_write"));
        pushButton_write->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));

        verticalLayout->addWidget(pushButton_write);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(SecDialog);

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QCoreApplication::translate("SecDialog", "Dialog", nullptr));
        pushButton_write->setText(QCoreApplication::translate("SecDialog", "write", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
