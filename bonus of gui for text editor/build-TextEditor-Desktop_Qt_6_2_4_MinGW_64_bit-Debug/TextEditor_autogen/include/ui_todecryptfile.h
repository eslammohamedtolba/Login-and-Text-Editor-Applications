/********************************************************************************
** Form generated from reading UI file 'todecryptfile.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODECRYPTFILE_H
#define UI_TODECRYPTFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Todecryptfile
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit_todecryptfile;

    void setupUi(QDialog *Todecryptfile)
    {
        if (Todecryptfile->objectName().isEmpty())
            Todecryptfile->setObjectName(QString::fromUtf8("Todecryptfile"));
        Todecryptfile->resize(591, 455);
        Todecryptfile->setStyleSheet(QString::fromUtf8("background:rgb(201,101,0);"));
        pushButton = new QPushButton(Todecryptfile);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 220, 141, 81));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        lineEdit_todecryptfile = new QLineEdit(Todecryptfile);
        lineEdit_todecryptfile->setObjectName(QString::fromUtf8("lineEdit_todecryptfile"));
        lineEdit_todecryptfile->setEnabled(false);
        lineEdit_todecryptfile->setGeometry(QRect(150, 160, 281, 31));
        lineEdit_todecryptfile->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255);"));

        retranslateUi(Todecryptfile);

        QMetaObject::connectSlotsByName(Todecryptfile);
    } // setupUi

    void retranslateUi(QDialog *Todecryptfile)
    {
        Todecryptfile->setWindowTitle(QCoreApplication::translate("Todecryptfile", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Todecryptfile", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Todecryptfile: public Ui_Todecryptfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODECRYPTFILE_H
