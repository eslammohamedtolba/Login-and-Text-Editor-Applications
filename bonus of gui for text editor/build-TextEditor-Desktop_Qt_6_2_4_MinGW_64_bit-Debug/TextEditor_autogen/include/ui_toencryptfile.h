/********************************************************************************
** Form generated from reading UI file 'toencryptfile.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOENCRYPTFILE_H
#define UI_TOENCRYPTFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Toencryptfile
{
public:
    QLineEdit *lineEdit_toencryptfile;
    QPushButton *pushButton;

    void setupUi(QDialog *Toencryptfile)
    {
        if (Toencryptfile->objectName().isEmpty())
            Toencryptfile->setObjectName(QString::fromUtf8("Toencryptfile"));
        Toencryptfile->resize(593, 484);
        Toencryptfile->setStyleSheet(QString::fromUtf8("background:rgb(201,101,0);"));
        lineEdit_toencryptfile = new QLineEdit(Toencryptfile);
        lineEdit_toencryptfile->setObjectName(QString::fromUtf8("lineEdit_toencryptfile"));
        lineEdit_toencryptfile->setEnabled(false);
        lineEdit_toencryptfile->setGeometry(QRect(150, 130, 281, 41));
        lineEdit_toencryptfile->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255);"));
        pushButton = new QPushButton(Toencryptfile);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 230, 141, 81));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));

        retranslateUi(Toencryptfile);

        QMetaObject::connectSlotsByName(Toencryptfile);
    } // setupUi

    void retranslateUi(QDialog *Toencryptfile)
    {
        Toencryptfile->setWindowTitle(QCoreApplication::translate("Toencryptfile", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Toencryptfile", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Toencryptfile: public Ui_Toencryptfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOENCRYPTFILE_H
