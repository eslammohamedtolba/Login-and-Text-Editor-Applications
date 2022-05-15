#include "thirddialog.h"
#include "ui_thirddialog.h"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include "QMessageBox"
ThirdDialog::ThirdDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThirdDialog)
{
    ui->setupUi(this);
}

ThirdDialog::~ThirdDialog()
{
    delete ui;
}

void ThirdDialog::on_pushButton_read_clicked()
{
    //QString file_name=ui->lineEdit_filename->text();
    QString filter="all text files (*.txt)";
    QString file_name=QFileDialog::getOpenFileName(this,"open a file","C://",filter);// QDir::homepath() ->include<QDir>
    QFile File(file_name);
    if(!File.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"title","the file not open");
    }
    QTextStream in(&File);
    QString text=in.readAll();
    ui->plainTextEdit_Read->setPlainText(text);
    File.close();
}

