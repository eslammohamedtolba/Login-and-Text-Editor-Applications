#include "toencryptfile.h"
#include "ui_toencryptfile.h"

Toencryptfile::Toencryptfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Toencryptfile)
{
    ui->setupUi(this);
    setWindowTitle("encrypt file");
    ui->lineEdit_toencryptfile->setText("the file has been encrypted");
}

Toencryptfile::~Toencryptfile()
{
    delete ui;
}

void Toencryptfile::on_pushButton_clicked()
{
    this->close();
}

