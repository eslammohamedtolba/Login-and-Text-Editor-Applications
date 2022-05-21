/********************************************************************************
** Form generated from reading UI file 'thirddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDDIALOG_H
#define UI_THIRDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ThirdDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit_Read;
    QPushButton *pushButton_read;

    void setupUi(QDialog *ThirdDialog)
    {
        if (ThirdDialog->objectName().isEmpty())
            ThirdDialog->setObjectName(QString::fromUtf8("ThirdDialog"));
        ThirdDialog->resize(663, 478);
        ThirdDialog->setStyleSheet(QString::fromUtf8("background:rgb(255, 170, 255);"));
        verticalLayout_2 = new QVBoxLayout(ThirdDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plainTextEdit_Read = new QPlainTextEdit(ThirdDialog);
        plainTextEdit_Read->setObjectName(QString::fromUtf8("plainTextEdit_Read"));
        plainTextEdit_Read->setEnabled(false);
        plainTextEdit_Read->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);"));

        verticalLayout->addWidget(plainTextEdit_Read);

        pushButton_read = new QPushButton(ThirdDialog);
        pushButton_read->setObjectName(QString::fromUtf8("pushButton_read"));
        pushButton_read->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));

        verticalLayout->addWidget(pushButton_read);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ThirdDialog);

        QMetaObject::connectSlotsByName(ThirdDialog);
    } // setupUi

    void retranslateUi(QDialog *ThirdDialog)
    {
        ThirdDialog->setWindowTitle(QCoreApplication::translate("ThirdDialog", "Dialog", nullptr));
        pushButton_read->setText(QCoreApplication::translate("ThirdDialog", "read", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThirdDialog: public Ui_ThirdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDDIALOG_H
