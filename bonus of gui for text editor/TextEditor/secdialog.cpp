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
    setWindowTitle("Write in file");
}

SecDialog::~SecDialog()
{
    delete ui;
}

SecDialog::SecDialog(QString file_name,QWidget *parent) :SecDialog(parent)
{
    myfilename=file_name;
}

void SecDialog::on_pushButton_write_clicked()
{
    QFile File(myfilename);
    if(!File.open(QFile::Append | QFile::Text)){
        QMessageBox::warning(this,"title","the file not open");
    }
    QTextStream out(&File);
    QString text=ui->plainTextEdit_Write->toPlainText();
    out<<"\n"<<text;
    File.flush();
    File.close();
    this->close();
}

