/********************************************************************************
** Form generated from reading UI file 'linesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINESDIALOG_H
#define UI_LINESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LinesDialog
{
public:
    QLineEdit *lineEdit_countlines;
    QPushButton *pushButton_toexit;

    void setupUi(QDialog *LinesDialog)
    {
        if (LinesDialog->objectName().isEmpty())
            LinesDialog->setObjectName(QString::fromUtf8("LinesDialog"));
        LinesDialog->resize(688, 426);
        LinesDialog->setStyleSheet(QString::fromUtf8("background:rgb(201,101,0);"));
        lineEdit_countlines = new QLineEdit(LinesDialog);
        lineEdit_countlines->setObjectName(QString::fromUtf8("lineEdit_countlines"));
        lineEdit_countlines->setEnabled(false);
        lineEdit_countlines->setGeometry(QRect(160, 100, 361, 41));
        lineEdit_countlines->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);"));
        pushButton_toexit = new QPushButton(LinesDialog);
        pushButton_toexit->setObjectName(QString::fromUtf8("pushButton_toexit"));
        pushButton_toexit->setGeometry(QRect(300, 190, 111, 71));
        pushButton_toexit->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));

        retranslateUi(LinesDialog);

        QMetaObject::connectSlotsByName(LinesDialog);
    } // setupUi

    void retranslateUi(QDialog *LinesDialog)
    {
        LinesDialog->setWindowTitle(QCoreApplication::translate("LinesDialog", "Dialog", nullptr));
        pushButton_toexit->setText(QCoreApplication::translate("LinesDialog", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LinesDialog: public Ui_LinesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINESDIALOG_H
