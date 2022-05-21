#include "emptydialog.h"
#include "ui_emptydialog.h"

EmptyDialog::EmptyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmptyDialog)
{
    ui->setupUi(this);
    setWindowTitle("Empty file");
    ui->lineEdit_emptyfile->setText("the file became empty");
}

EmptyDialog::~EmptyDialog()
{
    delete ui;
}

void EmptyDialog::on_pushButton_toexit_clicked()
{
    this->close();
}

