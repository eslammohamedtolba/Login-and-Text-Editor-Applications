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
    setWindowTitle("Save file");
    ui->lineEdit_save->setEnabled(false);
    ui->pushButton_save->setEnabled(false);
    ui->pushButton_save->setStyleSheet("background-color: rgb(170,170,170);border-radius:7px;border:1px solid grey;color:white");

}

TosaveDialog::~TosaveDialog()
{
    delete ui;
}

TosaveDialog::TosaveDialog(QString file_name,QString fileoldcontent,QWidget *parent) :TosaveDialog(parent)
{
    myfilename=file_name;
    myfilecontent=fileoldcontent;
}

void TosaveDialog::on_pushButton_save_clicked()
{
    if(ui->radioButton_different->isChecked()){
        QString diffefileoldcontent;
        QFile file(myfilename);
        if(!file.open(QFile::ReadOnly | QFile::Text)){
            qCritical()<<"the first file not exit, I created it for you";
            qCritical()<<file.errorString();
            return;
        }
        QTextStream out(&file);
        while(!out.atEnd()){
            diffefileoldcontent.append(out.readLine());
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
        QFile samefile(myfilename);
        if(!samefile.open(QFile::WriteOnly | QFile::Text)){
            qCritical()<<"the first file not exit, I created it for you";
            qCritical()<<samefile.errorString();
            return;
        }
        QTextStream sameout(&samefile);
        sameout<<myfilecontent;
        samefile.close();
    }
    this->close();
}

void TosaveDialog::on_lineEdit_save_textChanged(const QString &arg1)
{
   if(!ui->lineEdit_save->text().isEmpty()){
       ui->pushButton_save->setEnabled(true);
       ui->pushButton_save->setStyleSheet("background-color: teal;border-radius:7px;border:1px solid grey;color:white");
   }
   else{
       ui->pushButton_save->setEnabled(false);
       ui->pushButton_save->setStyleSheet("background-color: rgb(170,170,170);border-radius:7px;border:1px solid grey;color:white");
   }
}

void TosaveDialog::on_radioButton_different_pressed()
{
    ui->pushButton_save->setEnabled(false);
    ui->pushButton_save->setStyleSheet("background-color: rgb(170,170,170);border-radius:7px;border:1px solid grey;color:white");
    ui->lineEdit_save->setEnabled(true);
}


void TosaveDialog::on_radioButton_same_pressed()
{
     ui->lineEdit_save->setText("");
     ui->lineEdit_save->setEnabled(false);
     ui->pushButton_save->setEnabled(true);
     ui->pushButton_save->setStyleSheet("background-color: teal;border-radius:7px;border:1px solid grey;color:white");

}


