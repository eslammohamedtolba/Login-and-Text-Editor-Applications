/********************************************************************************
** Form generated from reading UI file 'charsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARSDIALOG_H
#define UI_CHARSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CharsDialog
{
public:
    QLineEdit *lineEdit_countchars;
    QPushButton *pushButton_toexit;

    void setupUi(QDialog *CharsDialog)
    {
        if (CharsDialog->objectName().isEmpty())
            CharsDialog->setObjectName(QString::fromUtf8("CharsDialog"));
        CharsDialog->resize(592, 417);
        CharsDialog->setStyleSheet(QString::fromUtf8("background:rgb(201,101,0);"));
        lineEdit_countchars = new QLineEdit(CharsDialog);
        lineEdit_countchars->setObjectName(QString::fromUtf8("lineEdit_countchars"));
        lineEdit_countchars->setEnabled(false);
        lineEdit_countchars->setGeometry(QRect(140, 130, 291, 41));
        lineEdit_countchars->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);"));
        pushButton_toexit = new QPushButton(CharsDialog);
        pushButton_toexit->setObjectName(QString::fromUtf8("pushButton_toexit"));
        pushButton_toexit->setGeometry(QRect(220, 240, 131, 71));
        pushButton_toexit->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));

        retranslateUi(CharsDialog);

        QMetaObject::connectSlotsByName(CharsDialog);
    } // setupUi

    void retranslateUi(QDialog *CharsDialog)
    {
        CharsDialog->setWindowTitle(QCoreApplication::translate("CharsDialog", "Dialog", nullptr));
        pushButton_toexit->setText(QCoreApplication::translate("CharsDialog", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CharsDialog: public Ui_CharsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARSDIALOG_H
