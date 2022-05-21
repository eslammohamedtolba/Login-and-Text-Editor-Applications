/********************************************************************************
** Form generated from reading UI file 'tosavedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOSAVEDIALOG_H
#define UI_TOSAVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_TosaveDialog
{
public:
    QRadioButton *radioButton_same;
    QRadioButton *radioButton_different;
    QLineEdit *lineEdit_save;
    QLabel *label;
    QPushButton *pushButton_save;

    void setupUi(QDialog *TosaveDialog)
    {
        if (TosaveDialog->objectName().isEmpty())
            TosaveDialog->setObjectName(QString::fromUtf8("TosaveDialog"));
        TosaveDialog->setEnabled(true);
        TosaveDialog->resize(680, 442);
        TosaveDialog->setStyleSheet(QString::fromUtf8("background:rgb(201,101,0);"));
        radioButton_same = new QRadioButton(TosaveDialog);
        radioButton_same->setObjectName(QString::fromUtf8("radioButton_same"));
        radioButton_same->setGeometry(QRect(130, 120, 141, 20));
        radioButton_different = new QRadioButton(TosaveDialog);
        radioButton_different->setObjectName(QString::fromUtf8("radioButton_different"));
        radioButton_different->setGeometry(QRect(130, 180, 161, 20));
        lineEdit_save = new QLineEdit(TosaveDialog);
        lineEdit_save->setObjectName(QString::fromUtf8("lineEdit_save"));
        lineEdit_save->setEnabled(true);
        lineEdit_save->setGeometry(QRect(160, 210, 113, 22));
        lineEdit_save->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);"));
        label = new QLabel(TosaveDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 210, 141, 20));
        pushButton_save = new QPushButton(TosaveDialog);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(404, 130, 91, 71));
        pushButton_save->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));

        retranslateUi(TosaveDialog);

        QMetaObject::connectSlotsByName(TosaveDialog);
    } // setupUi

    void retranslateUi(QDialog *TosaveDialog)
    {
        TosaveDialog->setWindowTitle(QCoreApplication::translate("TosaveDialog", "Dialog", nullptr));
        radioButton_same->setText(QCoreApplication::translate("TosaveDialog", "     save in the same file", nullptr));
        radioButton_different->setText(QCoreApplication::translate("TosaveDialog", "     save in different file", nullptr));
        label->setText(QCoreApplication::translate("TosaveDialog", "please enter the name file", nullptr));
        pushButton_save->setText(QCoreApplication::translate("TosaveDialog", "save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TosaveDialog: public Ui_TosaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOSAVEDIALOG_H
