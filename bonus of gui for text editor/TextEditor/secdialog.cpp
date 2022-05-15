#include "secdialog.h"
#include "ui_secdialog.h"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include "QMessageBox"
SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_pushButton_write_clicked()
{
    //QString file_name=ui->lineEdit_filename->text();
    //Write
    QString filter="all text files (*.txt)";
    QString file_name=QFileDialog::getOpenFileName(this,"open a file","C://",filter);
    QFile File(file_name);
    if(!File.open(QFile::Append | QFile::Text)){
        QMessageBox::warning(this,"title","the file not open");
    }
    QTextStream out(&File);
    QString text=ui->plainTextEdit_Write->toPlainText();
    out<<"\n"<<text;
    File.flush();
    File.close();
}

