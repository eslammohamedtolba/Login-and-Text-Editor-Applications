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
    setWindowTitle("Count word repetition");
    ui->pushButton_repeatword->setEnabled(false);
    ui->pushButton_repeatword->setStyleSheet("background-color: rgb(170,170,170);border-radius:7px;border:1px solid grey;color:white");

}

RepeatwDialog::~RepeatwDialog()
{
    delete ui;
}


RepeatwDialog::RepeatwDialog(QString file_name,QWidget *parent) :RepeatwDialog(parent)
{
    myfilename=file_name;
}

void RepeatwDialog::on_lineEdit_searchword_textChanged(const QString &arg1)
{
    if(!ui->lineEdit_searchword->text().isEmpty()){
        ui->pushButton_repeatword->setEnabled(true);
        ui->pushButton_repeatword->setStyleSheet("background-color: teal;border-radius:7px;border:1px solid grey;color:white");

    }
    else{
        ui->pushButton_repeatword->setEnabled(false);
        ui->pushButton_repeatword->setStyleSheet("background-color: rgb(170,170,170);border-radius:7px;border:1px solid grey;color:white");
        }
}

void RepeatwDialog::on_pushButton_repeatword_clicked()
{
    QString wordsearch=ui->lineEdit_searchword->text().toLower();
    QFile file(myfilename);
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


void RepeatwDialog::on_pushButton_toexit_clicked()
{
    this->close();
}

