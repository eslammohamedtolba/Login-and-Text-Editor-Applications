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
    setWindowTitle("Merge two files");
}

FourthDialog::~FourthDialog()
{
    delete ui;
}

FourthDialog::FourthDialog(QString file_name,QWidget *parent) :FourthDialog(parent)
{
    myfilename=file_name;
}

void FourthDialog::on_pushButton_merge_clicked()
{
    QFile file1(myfilename);
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
    QString filename2=ui->lineEdit_second->text()+".txt";
    QFile file2(filename2);
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
    QString filename3=ui->lineEdit_namthirdfile->text()+".txt";
    QFile file3(filename3);
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
    this->close();
}
