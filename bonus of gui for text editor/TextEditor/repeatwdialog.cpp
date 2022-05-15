#include "repeatwdialog.h"
#include "ui_repeatwdialog.h"
#include "QString"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include "QMessageBox"
#include "QString"
RepeatwDialog::RepeatwDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RepeatwDialog)
{
    ui->setupUi(this);
}

RepeatwDialog::~RepeatwDialog()
{
    delete ui;
}

void RepeatwDialog::on_pushButton_repeatword_clicked()
{
    //QString filee_name=ui->lineEdit_filename->text();
    QString wordsearch=ui->lineEdit_searchword->text().toLower();
    QString filter="all text files (*.txt)";
    QString file_name=QFileDialog::getOpenFileName(this,"open a first file","C://",filter);
    QFile file(file_name);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<file.errorString();
        return;
    }
    QString word;int repeatword=0;
    QTextStream out(&file);
    while(!out.atEnd()) {
            QString line = out.readLine();
            if(!line.isEmpty()){
                QStringList words = line.split(" ");
                foreach(QString word, words){
                   if(wordsearch==word.toLower()){
                       repeatword++;
                   }
                }
            }
    }
    ui->lineEdit_repeatword->setText("the words in file are "+QString::number(repeatword));
    file.close();
}

