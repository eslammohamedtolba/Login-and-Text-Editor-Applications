/********************************************************************************
** Form generated from reading UI file 'tolowerwords.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOLOWERWORDS_H
#define UI_TOLOWERWORDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Tolowerwords
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit_tolower;

    void setupUi(QDialog *Tolowerwords)
    {
        if (Tolowerwords->objectName().isEmpty())
            Tolowerwords->setObjectName(QString::fromUtf8("Tolowerwords"));
        Tolowerwords->resize(651, 444);
        Tolowerwords->setStyleSheet(QString::fromUtf8("background:rgb(201,101,0);"));
        pushButton = new QPushButton(Tolowerwords);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 200, 141, 81));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        lineEdit_tolower = new QLineEdit(Tolowerwords);
        lineEdit_tolower->setObjectName(QString::fromUtf8("lineEdit_tolower"));
        lineEdit_tolower->setEnabled(false);
        lineEdit_tolower->setGeometry(QRect(150, 140, 291, 31));
        lineEdit_tolower->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255);"));

        retranslateUi(Tolowerwords);

        QMetaObject::connectSlotsByName(Tolowerwords);
    } // setupUi

    void retranslateUi(QDialog *Tolowerwords)
    {
        Tolowerwords->setWindowTitle(QCoreApplication::translate("Tolowerwords", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Tolowerwords", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tolowerwords: public Ui_Tolowerwords {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOLOWERWORDS_H
