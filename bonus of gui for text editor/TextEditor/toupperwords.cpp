#include "toupperwords.h"
#include "ui_toupperwords.h"

Toupperwords::Toupperwords(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Toupperwords)
{
    ui->setupUi(this);
    setWindowTitle("first each word upper");
    ui->lineEdit_toupper->setText("all words in the file bacame upper case");
}

Toupperwords::~Toupperwords()
{
    delete ui;
}

void Toupperwords::on_pushButton_clicked()
{
    this->close();
}

