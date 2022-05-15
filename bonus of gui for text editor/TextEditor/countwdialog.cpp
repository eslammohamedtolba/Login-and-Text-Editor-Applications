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
    countwords();
}

CountwDialog::~CountwDialog()
{
    delete ui;
}

void CountwDialog::countwords()
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
    QString word;int countwords=0;
    QTextStream out(&file);
    while(!out.atEnd()) {
            QString line = out.readLine();
            if(!line.isEmpty()){
                QStringList words = line.split(" ");
                foreach(QString word, words){
                   countwords++;
                }
            }
        }
    ui->lineEdit_countwords->setText("the words in file are "+QString::number(countwords));
    file.close();
}
