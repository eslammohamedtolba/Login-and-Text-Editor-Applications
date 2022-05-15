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

QT_BEGIN_NAMESPACE

class Ui_CharsDialog
{
public:
    QLineEdit *lineEdit_countchars;

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

        retranslateUi(CharsDialog);

        QMetaObject::connectSlotsByName(CharsDialog);
    } // setupUi

    void retranslateUi(QDialog *CharsDialog)
    {
        CharsDialog->setWindowTitle(QCoreApplication::translate("CharsDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CharsDialog: public Ui_CharsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARSDIALOG_H
