#include "tofirstupper.h"
#include "ui_tofirstupper.h"

Tofirstupper::Tofirstupper(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tofirstupper)
{
    ui->setupUi(this);
    setWindowTitle("first each word upper");
    ui->lineEdit_tofirstupper->setText("each word of file starts with upper character");
}

Tofirstupper::~Tofirstupper()
{
    delete ui;
}

void Tofirstupper::on_pushButton_clicked()
{
    this->close();
}

