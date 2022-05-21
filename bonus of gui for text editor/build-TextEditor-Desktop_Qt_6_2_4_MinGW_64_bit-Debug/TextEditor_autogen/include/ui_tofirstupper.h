/********************************************************************************
** Form generated from reading UI file 'tofirstupper.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOFIRSTUPPER_H
#define UI_TOFIRSTUPPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Tofirstupper
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit_tofirstupper;

    void setupUi(QDialog *Tofirstupper)
    {
        if (Tofirstupper->objectName().isEmpty())
            Tofirstupper->setObjectName(QString::fromUtf8("Tofirstupper"));
        Tofirstupper->resize(790, 479);
        Tofirstupper->setStyleSheet(QString::fromUtf8("background:rgb(201,101,0);"));
        pushButton = new QPushButton(Tofirstupper);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 220, 151, 101));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        lineEdit_tofirstupper = new QLineEdit(Tofirstupper);
        lineEdit_tofirstupper->setObjectName(QString::fromUtf8("lineEdit_tofirstupper"));
        lineEdit_tofirstupper->setEnabled(false);
        lineEdit_tofirstupper->setGeometry(QRect(210, 150, 301, 41));
        lineEdit_tofirstupper->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);"));

        retranslateUi(Tofirstupper);

        QMetaObject::connectSlotsByName(Tofirstupper);
    } // setupUi

    void retranslateUi(QDialog *Tofirstupper)
    {
        Tofirstupper->setWindowTitle(QCoreApplication::translate("Tofirstupper", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Tofirstupper", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tofirstupper: public Ui_Tofirstupper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOFIRSTUPPER_H
