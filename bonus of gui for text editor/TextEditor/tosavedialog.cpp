#include "tosavedialog.h"
#include "ui_tosavedialog.h"
#include "QString"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include "QMessageBox"
TosaveDialog::TosaveDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TosaveDialog)
{
    ui->setupUi(this);
    /*
    if(ui->radioButton_different->isChecked()){
        ui->lineEdit_save->displayText();
    }
    else{
        ui->lineEdit_save->inputRejected();
    }
    */
}

TosaveDialog::~TosaveDialog()
{
    delete ui;
}

void TosaveDialog::on_pushButton_save_clicked()
{
    QString fileoldcontent="";
    //QString file_name=ui->lineEdit_filename->text()+".txt";
    if(ui->radioButton_same->isChecked()){
        QString filter="all text files (*.txt)";
        QString file_name=QFileDialog::getOpenFileName(this,"open a first file","C://",filter);
        QFile file(file_name);
        if(!file.open(QFile::ReadOnly | QFile::Text)){
            qCritical()<<"the first file not exit, I created it for you";
            qCritical()<<file.errorString();
            return;
        }
        QTextStream out(&file);
        while(!out.atEnd()){
            fileoldcontent=out.readLine();
            fileoldcontent.push_back("\n");
        }
        file.close();
    }
    else{
        QString diffefileoldcontent;
        //QString file_name=ui->lineEdit_filename->text()+".txt";
        QString filter="all text files (*.txt)";
        QString file_name=QFileDialog::getOpenFileName(this,"open a first file","C://",filter);
        QFile file(file_name);
        if(!file.open(QFile::ReadOnly | QFile::Text)){
            qCritical()<<"the first file not exit, I created it for you";
            qCritical()<<file.errorString();
            return;
        }
        QTextStream out(&file);
        while(!out.atEnd()){
            diffefileoldcontent=out.readLine();
            diffefileoldcontent.push_back("\n");
        }
        file.close();
        //...............................................................................................
        QFile diffefile(ui->lineEdit_save->text()+".txt");
        if(!diffefile.open(QFile::WriteOnly | QFile::Text)){
            qCritical()<<"the first file not exit, I created it for you";
            qCritical()<<diffefile.errorString();
            return;
        }
        QTextStream diffeeout(&diffefile);
        diffeeout<<diffefileoldcontent;
        diffefile.close();
        //...............................................................................................
        QFile samefile(file_name);
        if(!samefile.open(QFile::WriteOnly | QFile::Text)){
            qCritical()<<"the first file not exit, I created it for you";
            qCritical()<<samefile.errorString();
            return;
        }
        QTextStream sameout(&samefile);
        sameout<<diffefileoldcontent;
        samefile.close();
    }
}

