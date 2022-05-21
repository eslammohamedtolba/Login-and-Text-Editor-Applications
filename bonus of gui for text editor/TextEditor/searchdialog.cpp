#include "searchdialog.h"
#include "ui_searchdialog.h"
#include "QString"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include "QMessageBox"
SearchDialog::SearchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDialog)
{
    ui->setupUi(this);
    setWindowTitle("Search about word in file");
    ui->pushButton_search->setEnabled(false);
    ui->pushButton_search->setStyleSheet("background-color: rgb(170,170,170);border-radius:7px;border:1px solid grey;color:white");

}

SearchDialog::~SearchDialog()
{
    delete ui;
}

void SearchDialog::on_lineEdit_search_textChanged(const QString &arg1)
{
    if(!ui->lineEdit_search->text().isEmpty()){
        ui->pushButton_search->setEnabled(true);
        ui->pushButton_search->setStyleSheet("background-color: teal;border-radius:7px;border:1px solid grey;color:white");

    }
    else{
        ui->pushButton_search->setEnabled(false);
        ui->pushButton_search->setStyleSheet("background-color: rgb(170,170,170);border-radius:7px;border:1px solid grey;color:white");
        }
}

SearchDialog::SearchDialog(QString file_name,QWidget *parent):SearchDialog(parent)
{
    myfilename=file_name;
}


void SearchDialog::on_pushButton_search_clicked()
{
    QFile file(myfilename);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<file.errorString();
        return;
    }
    QString line;bool existing=false;
    QTextStream out(&file);
    while(!out.atEnd()){
        line=out.readLine();
        if(line.toLower().contains(ui->lineEdit_search->text().toLower())){
            existing=true;
            break;
        }
    }
    if(existing==true){
        ui->lineEdit_repetitionword->setText("the word "+ui->lineEdit_search->text()+" is exist ");
    }
    else{
        ui->lineEdit_repetitionword->setText("the word "+ui->lineEdit_search->text()+" isn't exist ");
    }
    file.close();
}


void SearchDialog::on_pushButton_toexit_clicked()
{
    this->close();
}

