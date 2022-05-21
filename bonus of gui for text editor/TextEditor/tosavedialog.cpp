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
    if(ui->radioButton_same->isChecked()){
        QFile file(myfilename);
        if(!file.open(QFile::ReadOnly | QFile::Text)){
            qCritical()<<"the first file not exit, I created it for you";
            qCritical()<<file.errorString();
            return;
        }
        QTextStream out(&file);
        while(!out.atEnd()){
            myfilecontent=out.readLine();
            myfilecontent.push_back("\n");
        }
        file.close();
    }
    else{
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

