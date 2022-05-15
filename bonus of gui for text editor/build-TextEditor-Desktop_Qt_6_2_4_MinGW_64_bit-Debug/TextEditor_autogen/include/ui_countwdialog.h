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

QT_BEGIN_NAMESPACE

class Ui_CountwDialog
{
public:
    QLineEdit *lineEdit_countwords;

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

        retranslateUi(CountwDialog);

        QMetaObject::connectSlotsByName(CountwDialog);
    } // setupUi

    void retranslateUi(QDialog *CountwDialog)
    {
        CountwDialog->setWindowTitle(QCoreApplication::translate("CountwDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CountwDialog: public Ui_CountwDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTWDIALOG_H
