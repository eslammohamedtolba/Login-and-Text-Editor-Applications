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
}

SearchDialog::~SearchDialog()
{
    delete ui;
}

void SearchDialog::on_pushButton_search_clicked()
{
    //QString fileee_name=ui->lineEdit_filename->text();
    QString filter="all text files (*.txt)";
    QString file_name=QFileDialog::getOpenFileName(this,"open a first file","C://",filter);
    QFile file(file_name);
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

