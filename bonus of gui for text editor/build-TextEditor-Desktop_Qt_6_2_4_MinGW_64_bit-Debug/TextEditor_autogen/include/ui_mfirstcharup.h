/********************************************************************************
** Form generated from reading UI file 'mfirstcharup.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MFIRSTCHARUP_H
#define UI_MFIRSTCHARUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_mfirstcharup
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit_metoupper;

    void setupUi(QDialog *mfirstcharup)
    {
        if (mfirstcharup->objectName().isEmpty())
            mfirstcharup->setObjectName(QString::fromUtf8("mfirstcharup"));
        mfirstcharup->resize(723, 484);
        pushButton = new QPushButton(mfirstcharup);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 240, 131, 81));
        lineEdit_metoupper = new QLineEdit(mfirstcharup);
        lineEdit_metoupper->setObjectName(QString::fromUtf8("lineEdit_metoupper"));
        lineEdit_metoupper->setEnabled(false);
        lineEdit_metoupper->setGeometry(QRect(50, 140, 531, 31));

        retranslateUi(mfirstcharup);

        QMetaObject::connectSlotsByName(mfirstcharup);
    } // setupUi

    void retranslateUi(QDialog *mfirstcharup)
    {
        mfirstcharup->setWindowTitle(QCoreApplication::translate("mfirstcharup", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("mfirstcharup", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mfirstcharup: public Ui_mfirstcharup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MFIRSTCHARUP_H
