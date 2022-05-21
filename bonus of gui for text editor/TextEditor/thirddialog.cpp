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
    setWindowTitle("Read from file");
}

ThirdDialog::~ThirdDialog()
{
    delete ui;
}

ThirdDialog::ThirdDialog(QString file_name,QWidget *parent) :ThirdDialog(parent)
{
    myfilename=file_name;
}

void ThirdDialog::on_pushButton_read_clicked()
{
    QFile File(myfilename);
    if(!File.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"title","the file not open");
    }
    QTextStream in(&File);
    QString text=in.readAll();
    ui->plainTextEdit_Read->setPlainText(text);
    File.close();
}

