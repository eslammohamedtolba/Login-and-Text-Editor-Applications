#include "countwdialog.h"
#include "ui_countwdialog.h"
#include "QString"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include "QMessageBox"
CountwDialog::CountwDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CountwDialog)
{
    ui->setupUi(this);
    setWindowTitle("Count file words");
}

CountwDialog::~CountwDialog()
{
    delete ui;
}

CountwDialog::CountwDialog(QString file_name,QWidget *parent) :CountwDialog()
{
    myfilename=file_name;
    countwords();
}

void CountwDialog::countwords()
{
    QFile file(myfilename);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<file.errorString();
        return;
    }
    QString word;int countwords=0;
    QTextStream out(&file);
    while(!out.atEnd()) {
            QString line = out.readLine();
            if(!line.isEmpty()){
                QStringList words = line.split(" ");
                foreach(word, words){
                   countwords++;
                }
            }
        }
    ui->lineEdit_countwords->setText("the nmber of words in this file are "+QString::number(countwords));
    file.close();
}

void CountwDialog::on_pushButton_toexit_clicked()
{
    this->close();
}

