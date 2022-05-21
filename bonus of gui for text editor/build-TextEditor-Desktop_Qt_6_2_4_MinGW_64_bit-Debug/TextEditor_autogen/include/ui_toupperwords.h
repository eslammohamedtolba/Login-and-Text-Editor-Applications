/********************************************************************************
** Form generated from reading UI file 'toupperwords.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOUPPERWORDS_H
#define UI_TOUPPERWORDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Toupperwords
{
public:
    QLineEdit *lineEdit_toupper;
    QPushButton *pushButton;

    void setupUi(QDialog *Toupperwords)
    {
        if (Toupperwords->objectName().isEmpty())
            Toupperwords->setObjectName(QString::fromUtf8("Toupperwords"));
        Toupperwords->resize(667, 477);
        Toupperwords->setStyleSheet(QString::fromUtf8("background:rgb(201,101,0);"));
        lineEdit_toupper = new QLineEdit(Toupperwords);
        lineEdit_toupper->setObjectName(QString::fromUtf8("lineEdit_toupper"));
        lineEdit_toupper->setEnabled(false);
        lineEdit_toupper->setGeometry(QRect(200, 140, 271, 41));
        lineEdit_toupper->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255);"));
        pushButton = new QPushButton(Toupperwords);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 240, 141, 91));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));

        retranslateUi(Toupperwords);

        QMetaObject::connectSlotsByName(Toupperwords);
    } // setupUi

    void retranslateUi(QDialog *Toupperwords)
    {
        Toupperwords->setWindowTitle(QCoreApplication::translate("Toupperwords", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Toupperwords", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Toupperwords: public Ui_Toupperwords {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOUPPERWORDS_H
