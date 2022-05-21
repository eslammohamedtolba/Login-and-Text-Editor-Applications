/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_Add_text;
    QPushButton *pushButton_Display_content;
    QPushButton *pushButton_Empty_file;
    QPushButton *pushButton_Encrypt_file;
    QPushButton *pushButton_Decrypt_file;
    QPushButton *pushButton_count_words;
    QPushButton *pushButton_count_characters;
    QPushButton *pushButton_count_lines;
    QPushButton *pushButton_count_repeatword;
    QPushButton *pushButton_searchword;
    QPushButton *pushButton_toupper;
    QPushButton *pushButton_tolower;
    QPushButton *pushButton_merge2files;
    QPushButton *pushButton_firsttoupper;
    QPushButton *pushButton_save;
    QPushButton *pushButton_exit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_filename;
    QLineEdit *lineEdit_filename;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1506, 765);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(201, 101, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(240, 240, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QString::fromUtf8("background:rgb(201,101,0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_Add_text = new QPushButton(centralwidget);
        pushButton_Add_text->setObjectName(QString::fromUtf8("pushButton_Add_text"));
        pushButton_Add_text->setGeometry(QRect(240, 140, 191, 111));
        pushButton_Add_text->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        pushButton_Display_content = new QPushButton(centralwidget);
        pushButton_Display_content->setObjectName(QString::fromUtf8("pushButton_Display_content"));
        pushButton_Display_content->setGeometry(QRect(510, 140, 191, 121));
        pushButton_Display_content->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        pushButton_Empty_file = new QPushButton(centralwidget);
        pushButton_Empty_file->setObjectName(QString::fromUtf8("pushButton_Empty_file"));
        pushButton_Empty_file->setGeometry(QRect(780, 140, 191, 121));
        pushButton_Empty_file->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        pushButton_Encrypt_file = new QPushButton(centralwidget);
        pushButton_Encrypt_file->setObjectName(QString::fromUtf8("pushButton_Encrypt_file"));
        pushButton_Encrypt_file->setGeometry(QRect(240, 570, 191, 121));
        pushButton_Encrypt_file->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        pushButton_Decrypt_file = new QPushButton(centralwidget);
        pushButton_Decrypt_file->setObjectName(QString::fromUtf8("pushButton_Decrypt_file"));
        pushButton_Decrypt_file->setGeometry(QRect(1030, 570, 191, 121));
        pushButton_Decrypt_file->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        pushButton_count_words = new QPushButton(centralwidget);
        pushButton_count_words->setObjectName(QString::fromUtf8("pushButton_count_words"));
        pushButton_count_words->setGeometry(QRect(240, 430, 191, 121));
        pushButton_count_words->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        pushButton_count_characters = new QPushButton(centralwidget);
        pushButton_count_characters->setObjectName(QString::fromUtf8("pushButton_count_characters"));
        pushButton_count_characters->setGeometry(QRect(510, 430, 191, 121));
        pushButton_count_characters->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        pushButton_count_lines = new QPushButton(centralwidget);
        pushButton_count_lines->setObjectName(QString::fromUtf8("pushButton_count_lines"));
        pushButton_count_lines->setGeometry(QRect(780, 430, 191, 121));
        pushButton_count_lines->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        pushButton_count_repeatword = new QPushButton(centralwidget);
        pushButton_count_repeatword->setObjectName(QString::fromUtf8("pushButton_count_repeatword"));
        pushButton_count_repeatword->setGeometry(QRect(1030, 430, 191, 121));
        pushButton_count_repeatword->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        pushButton_searchword = new QPushButton(centralwidget);
        pushButton_searchword->setObjectName(QString::fromUtf8("pushButton_searchword"));
        pushButton_searchword->setGeometry(QRect(1030, 290, 191, 121));
        pushButton_searchword->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        pushButton_toupper = new QPushButton(centralwidget);
        pushButton_toupper->setObjectName(QString::fromUtf8("pushButton_toupper"));
        pushButton_toupper->setGeometry(QRect(510, 280, 191, 121));
        pushButton_toupper->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        pushButton_tolower = new QPushButton(centralwidget);
        pushButton_tolower->setObjectName(QString::fromUtf8("pushButton_tolower"));
        pushButton_tolower->setGeometry(QRect(780, 290, 191, 121));
        pushButton_tolower->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        pushButton_merge2files = new QPushButton(centralwidget);
        pushButton_merge2files->setObjectName(QString::fromUtf8("pushButton_merge2files"));
        pushButton_merge2files->setGeometry(QRect(1030, 140, 191, 121));
        pushButton_merge2files->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        pushButton_firsttoupper = new QPushButton(centralwidget);
        pushButton_firsttoupper->setObjectName(QString::fromUtf8("pushButton_firsttoupper"));
        pushButton_firsttoupper->setGeometry(QRect(240, 280, 191, 121));
        pushButton_firsttoupper->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        pushButton_save = new QPushButton(centralwidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(510, 570, 191, 121));
        pushButton_save->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        pushButton_exit = new QPushButton(centralwidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(780, 570, 191, 121));
        pushButton_exit->setStyleSheet(QString::fromUtf8("border-radius:7px;\n"
"border:1px solid grey;\n"
"background:teal;\n"
"color:white"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(590, 30, 371, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_filename = new QLabel(layoutWidget);
        label_filename->setObjectName(QString::fromUtf8("label_filename"));
        label_filename->setStyleSheet(QString::fromUtf8("color:black;\n"
"font:10pt \"Century Gothic\";\n"
""));

        horizontalLayout->addWidget(label_filename);

        lineEdit_filename = new QLineEdit(layoutWidget);
        lineEdit_filename->setObjectName(QString::fromUtf8("lineEdit_filename"));
        lineEdit_filename->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);\n"
"font:black;"));

        horizontalLayout->addWidget(lineEdit_filename);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1506, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_Add_text->setText(QCoreApplication::translate("MainWindow", "add text", nullptr));
        pushButton_Display_content->setText(QCoreApplication::translate("MainWindow", "Display file content", nullptr));
        pushButton_Empty_file->setText(QCoreApplication::translate("MainWindow", "Empty your file", nullptr));
        pushButton_Encrypt_file->setText(QCoreApplication::translate("MainWindow", "Encrypt your file ", nullptr));
        pushButton_Decrypt_file->setText(QCoreApplication::translate("MainWindow", "Decrypt your file", nullptr));
        pushButton_count_words->setText(QCoreApplication::translate("MainWindow", "count file words", nullptr));
        pushButton_count_characters->setText(QCoreApplication::translate("MainWindow", "count file characters", nullptr));
        pushButton_count_lines->setText(QCoreApplication::translate("MainWindow", "count file lines", nullptr));
        pushButton_count_repeatword->setText(QCoreApplication::translate("MainWindow", "count repeat of your word", nullptr));
        pushButton_searchword->setText(QCoreApplication::translate("MainWindow", "search about your word", nullptr));
        pushButton_toupper->setText(QCoreApplication::translate("MainWindow", "convert content toupper", nullptr));
        pushButton_tolower->setText(QCoreApplication::translate("MainWindow", "convert content tolower", nullptr));
        pushButton_merge2files->setText(QCoreApplication::translate("MainWindow", "merge your two files", nullptr));
        pushButton_firsttoupper->setText(QCoreApplication::translate("MainWindow", "convert first character toupper", nullptr));
        pushButton_save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_filename->setText(QCoreApplication::translate("MainWindow", "please enter your file name ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
