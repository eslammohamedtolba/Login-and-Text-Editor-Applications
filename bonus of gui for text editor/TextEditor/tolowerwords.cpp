#include "tolowerwords.h"
#include "ui_tolowerwords.h"

Tolowerwords::Tolowerwords(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tolowerwords)
{
    ui->setupUi(this);
    setWindowTitle("first each word lower");
    ui->lineEdit_tolower->setText("all words in the file bacame lower case");
}

Tolowerwords::~Tolowerwords()
{
    delete ui;
}

void Tolowerwords::on_pushButton_clicked()
{
    this->close();
}

