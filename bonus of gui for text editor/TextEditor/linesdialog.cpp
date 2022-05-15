#include "linesdialog.h"
#include "ui_linesdialog.h"
#include "QString"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include "QMessageBox"
LinesDialog::LinesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LinesDialog)
{
    ui->setupUi(this);
    countlines();
}

LinesDialog::~LinesDialog()
{
    delete ui;
}
void LinesDialog::countlines()
{
    //QString file_name=ui->lineEdit_filename->text();
    QString filter="all text files (*.txt)";
    QString file_name=QFileDialog::getOpenFileName(this,"open a first file","C://",filter);
    QFile file(file_name);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<file.errorString();
        return;
    }
    QString line;int countlines=0;
    QTextStream out(&file);
    while(!out.atEnd()){
        line=out.readLine();
        if(!line.isEmpty()){
            countlines++;
        }
    }
    ui->lineEdit_countlines->setText("the line in file are "+QString::number(countlines));
    file.close();
}
