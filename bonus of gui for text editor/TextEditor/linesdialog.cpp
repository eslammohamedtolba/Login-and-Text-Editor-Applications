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
    setWindowTitle("count file lines");
}

LinesDialog::~LinesDialog()
{
    delete ui;
}

LinesDialog::LinesDialog(QString file_name,QWidget *parent) :LinesDialog(parent)
{
    myfilename=file_name;
    countlines();
}

void LinesDialog::countlines()
{
    QFile file(myfilename);
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

void LinesDialog::on_pushButton_toexit_clicked()
{
    this->close();
}

