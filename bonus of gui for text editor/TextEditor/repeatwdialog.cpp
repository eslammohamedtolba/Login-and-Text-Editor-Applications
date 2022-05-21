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
}

RepeatwDialog::~RepeatwDialog()
{
    delete ui;
}

RepeatwDialog::RepeatwDialog(QString file_name,QWidget *parent) :RepeatwDialog(parent)
{
    myfilename=file_name;
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

