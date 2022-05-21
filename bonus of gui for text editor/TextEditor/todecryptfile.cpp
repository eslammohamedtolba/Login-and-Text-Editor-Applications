#include "todecryptfile.h"
#include "ui_todecryptfile.h"

Todecryptfile::Todecryptfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Todecryptfile)
{
    ui->setupUi(this);
    setWindowTitle("decrypt file");
    ui->lineEdit_todecryptfile->setText("the file has been decrypted");
}

Todecryptfile::~Todecryptfile()
{
    delete ui;
}

void Todecryptfile::on_pushButton_clicked()
{
    this->close();
}

