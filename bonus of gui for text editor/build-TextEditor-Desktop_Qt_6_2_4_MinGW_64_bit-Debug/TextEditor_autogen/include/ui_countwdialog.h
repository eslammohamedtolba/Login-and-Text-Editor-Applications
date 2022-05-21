/********************************************************************************
** Form generated from reading UI file 'countwdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTWDIALOG_H
#define UI_COUNTWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CountwDialog
{
public:
    QLineEdit *lineEdit_countwords;
    QPushButton *pushButton_toexit;

    void setupUi(QDialog *CountwDialog)
    {
        if (CountwDialog->objectName().isEmpty())
            CountwDialog->setObjectName(QString::fromUtf8("CountwDialog"));
        CountwDialog->resize(591, 405);
        CountwDialog->setStyleSheet(QString::fromUtf8("background:rgb(201,101,0);"));
        lineEdit_countwords = new QLineEdit(CountwDialog);
        lineEdit_countwords->setObjectName(QString::fromUtf8("lineEdit_countwords"));
        lineEdit_countwords->setEnabled(false);
        lineEdit_countwords->setGeometry(QRect(150, 110, 271, 41));
        lineEdit_countwords->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);"));
        pushButton_toexit = new QPushButton(CountwDialog);
        pushButton_toexit->setObjectName(QString::fromUtf8("pushButton_toexit"));
        pushButton_toexit->setGeometry(QRect(240, 190, 101, 71));
        pushButton_toexit->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));

        retranslateUi(CountwDialog);

        QMetaObject::connectSlotsByName(CountwDialog);
    } // setupUi

    void retranslateUi(QDialog *CountwDialog)
    {
        CountwDialog->setWindowTitle(QCoreApplication::translate("CountwDialog", "Dialog", nullptr));
        pushButton_toexit->setText(QCoreApplication::translate("CountwDialog", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CountwDialog: public Ui_CountwDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTWDIALOG_H
