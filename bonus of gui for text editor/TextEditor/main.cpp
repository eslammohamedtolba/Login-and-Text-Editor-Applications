#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QWidget *widget=new QWidget();
//    widget->setWindowTitle("Hello user");
//    widget->setGeometry(0,0,2000,1000);
//    widget->show();
    MainWindow firstwindow;
    firstwindow.setWindowTitle("Hello user");
    firstwindow.setGeometry(0,0,2000,1000);
    firstwindow.show();
    return a.exec();
}
