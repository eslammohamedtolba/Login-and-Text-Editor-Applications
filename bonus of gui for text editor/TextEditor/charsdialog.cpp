#include "charsdialog.h"
#include "ui_charsdialog.h"
#include "QString"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include "QMessageBox"
CharsDialog::CharsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CharsDialog)
{
    ui->setupUi(this);
    setWindowTitle("Count file characters");
}

CharsDialog::~CharsDialog()
{
    delete ui;
}

CharsDialog::CharsDialog(QString file_name,QWidget *parent) :CharsDialog(parent)
{
    myfilename=file_name;
    countchars();
}

void CharsDialog::countchars()
{
    QFile file(myfilename);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<file.errorString();
        return;
    }
    QString line;QChar character;int countcharas=0;
    QTextStream out(&file);
    while(!out.atEnd()){
        line=out.readLine();
        for(int i=0;i<line.length();i++){
            character=line.at(i);
            if(character!=' '){
                countcharas++;
            }
        }
    }
    ui->lineEdit_countchars->setText("the line in file are "+QString::number(countcharas));
    file.close();
}

void CharsDialog::on_pushButton_toexit_clicked()
{
    this->close();
}

