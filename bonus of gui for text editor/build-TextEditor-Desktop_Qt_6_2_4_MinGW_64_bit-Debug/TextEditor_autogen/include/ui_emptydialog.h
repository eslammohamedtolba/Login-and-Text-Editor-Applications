/********************************************************************************
** Form generated from reading UI file 'emptydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPTYDIALOG_H
#define UI_EMPTYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EmptyDialog
{
public:
    QLineEdit *lineEdit_emptyfile;
    QPushButton *pushButton_toexit;

    void setupUi(QDialog *EmptyDialog)
    {
        if (EmptyDialog->objectName().isEmpty())
            EmptyDialog->setObjectName(QString::fromUtf8("EmptyDialog"));
        EmptyDialog->resize(806, 529);
        EmptyDialog->setStyleSheet(QString::fromUtf8("background:rgb(201,101,0);"));
        lineEdit_emptyfile = new QLineEdit(EmptyDialog);
        lineEdit_emptyfile->setObjectName(QString::fromUtf8("lineEdit_emptyfile"));
        lineEdit_emptyfile->setEnabled(false);
        lineEdit_emptyfile->setGeometry(QRect(230, 130, 311, 41));
        lineEdit_emptyfile->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);"));
        pushButton_toexit = new QPushButton(EmptyDialog);
        pushButton_toexit->setObjectName(QString::fromUtf8("pushButton_toexit"));
        pushButton_toexit->setGeometry(QRect(340, 200, 101, 71));
        pushButton_toexit->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));

        retranslateUi(EmptyDialog);

        QMetaObject::connectSlotsByName(EmptyDialog);
    } // setupUi

    void retranslateUi(QDialog *EmptyDialog)
    {
        EmptyDialog->setWindowTitle(QCoreApplication::translate("EmptyDialog", "Dialog", nullptr));
        pushButton_toexit->setText(QCoreApplication::translate("EmptyDialog", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmptyDialog: public Ui_EmptyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPTYDIALOG_H
