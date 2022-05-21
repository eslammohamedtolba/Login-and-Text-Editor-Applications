#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow firstwindow;
    firstwindow.setWindowTitle("text editor");
    firstwindow.setGeometry(0,0,2000,1000);
    firstwindow.show();
    return a.exec();
}
