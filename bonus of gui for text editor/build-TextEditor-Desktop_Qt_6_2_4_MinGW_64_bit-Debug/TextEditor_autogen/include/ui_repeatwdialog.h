/********************************************************************************
** Form generated from reading UI file 'repeatwdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPEATWDIALOG_H
#define UI_REPEATWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RepeatwDialog
{
public:
    QLineEdit *lineEdit_repeatword;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_searchword;
    QPushButton *pushButton_repeatword;
    QPushButton *pushButton_toexit;

    void setupUi(QDialog *RepeatwDialog)
    {
        if (RepeatwDialog->objectName().isEmpty())
            RepeatwDialog->setObjectName(QString::fromUtf8("RepeatwDialog"));
        RepeatwDialog->resize(528, 361);
        RepeatwDialog->setStyleSheet(QString::fromUtf8("background:rgb(201,101,0);"));
        lineEdit_repeatword = new QLineEdit(RepeatwDialog);
        lineEdit_repeatword->setObjectName(QString::fromUtf8("lineEdit_repeatword"));
        lineEdit_repeatword->setEnabled(false);
        lineEdit_repeatword->setGeometry(QRect(90, 150, 241, 31));
        lineEdit_repeatword->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);"));
        layoutWidget = new QWidget(RepeatwDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 60, 271, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_searchword = new QLineEdit(layoutWidget);
        lineEdit_searchword->setObjectName(QString::fromUtf8("lineEdit_searchword"));
        lineEdit_searchword->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lineEdit_searchword);

        pushButton_repeatword = new QPushButton(RepeatwDialog);
        pushButton_repeatword->setObjectName(QString::fromUtf8("pushButton_repeatword"));
        pushButton_repeatword->setGeometry(QRect(390, 50, 111, 61));
        pushButton_repeatword->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        pushButton_toexit = new QPushButton(RepeatwDialog);
        pushButton_toexit->setObjectName(QString::fromUtf8("pushButton_toexit"));
        pushButton_toexit->setGeometry(QRect(360, 130, 131, 71));
        pushButton_toexit->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));

        retranslateUi(RepeatwDialog);

        QMetaObject::connectSlotsByName(RepeatwDialog);
    } // setupUi

    void retranslateUi(QDialog *RepeatwDialog)
    {
        RepeatwDialog->setWindowTitle(QCoreApplication::translate("RepeatwDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RepeatwDialog", "please enter your word", nullptr));
        pushButton_repeatword->setText(QCoreApplication::translate("RepeatwDialog", "push to repeat", nullptr));
        pushButton_toexit->setText(QCoreApplication::translate("RepeatwDialog", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RepeatwDialog: public Ui_RepeatwDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPEATWDIALOG_H
