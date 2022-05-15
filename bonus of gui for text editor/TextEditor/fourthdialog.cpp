#include "fourthdialog.h"
#include "ui_fourthdialog.h"
#include "QString"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include "QMessageBox"
FourthDialog::FourthDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FourthDialog)
{
    ui->setupUi(this);
}

FourthDialog::~FourthDialog()
{
    delete ui;
}

void FourthDialog::on_pushButton_merge_clicked()
{
    //QString file_name=ui->lineEdit_filename->text();
    QString filter="all text files (*.txt)";
    QString file_name=QFileDialog::getOpenFileName(this,"open a first file","C://",filter);
    QFile file1(file_name);

    if(!file1.open(QFile::ReadOnly | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<file1.errorString();
        return;
    }
    QString line,filecontent1,filecontent2;
    QTextStream out1(&file1);
    while(!out1.atEnd()){
        line=out1.readLine();
        filecontent1.append(line);
        filecontent1.push_back('\n');
    }
    file1.close();
    //QFile file2(ui->lineEdit_merge->text()+".txt");
    QFile file2(QFileDialog::getOpenFileName(this,"open a second file","C://",filter));
    if(!file2.open(QFile::ReadOnly | QFile::Text)){
        qCritical()<<"the second file not exit, I created it for you";
        qCritical()<<file2.errorString();
        return;
    }
    QTextStream out2(&file2);
    while(!out2.atEnd()){
        line=out2.readLine();
        filecontent2.append(line);
        filecontent2.push_back('\n');
    }
    file2.close();
    //QFile file3(ui->lineEdit_namthirdfile->text()+".txt");
    QFile file3(QFileDialog::getOpenFileName(this,"open a third file","C://",filter));
    if(!file3.open(QFile::Append | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<file3.errorString();
        return;
    }
    QTextStream out3(&file3);
    out3<<filecontent1<<"\n";
    out3<<filecontent2<<"\n";
    file3.flush();
    file3.close();
}
