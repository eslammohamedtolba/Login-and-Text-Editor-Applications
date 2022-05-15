/********************************************************************************
** Form generated from reading UI file 'fourthdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURTHDIALOG_H
#define UI_FOURTHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FourthDialog
{
public:
    QPushButton *pushButton_merge;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_merge;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_namthirdfile;

    void setupUi(QDialog *FourthDialog)
    {
        if (FourthDialog->objectName().isEmpty())
            FourthDialog->setObjectName(QString::fromUtf8("FourthDialog"));
        FourthDialog->resize(746, 560);
        FourthDialog->setStyleSheet(QString::fromUtf8("background:rgb(201,101,0);"));
        pushButton_merge = new QPushButton(FourthDialog);
        pushButton_merge->setObjectName(QString::fromUtf8("pushButton_merge"));
        pushButton_merge->setGeometry(QRect(230, 190, 161, 71));
        layoutWidget = new QWidget(FourthDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(167, 100, 327, 56));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_merge = new QLineEdit(layoutWidget);
        lineEdit_merge->setObjectName(QString::fromUtf8("lineEdit_merge"));

        horizontalLayout->addWidget(lineEdit_merge);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_namthirdfile = new QLineEdit(layoutWidget);
        lineEdit_namthirdfile->setObjectName(QString::fromUtf8("lineEdit_namthirdfile"));

        horizontalLayout_2->addWidget(lineEdit_namthirdfile);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(FourthDialog);

        QMetaObject::connectSlotsByName(FourthDialog);
    } // setupUi

    void retranslateUi(QDialog *FourthDialog)
    {
        FourthDialog->setWindowTitle(QCoreApplication::translate("FourthDialog", "Dialog", nullptr));
        pushButton_merge->setText(QCoreApplication::translate("FourthDialog", "Merge", nullptr));
        label->setText(QCoreApplication::translate("FourthDialog", "please enter second file to merge it", nullptr));
        label_2->setText(QCoreApplication::translate("FourthDialog", "please enter the name of third file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FourthDialog: public Ui_FourthDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURTHDIALOG_H
