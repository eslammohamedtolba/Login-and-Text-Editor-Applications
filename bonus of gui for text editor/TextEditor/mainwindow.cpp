#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QString"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include "QMessageBox"
//here are the global variables declared
QString fileoldcontent="";
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_lineEdit_filename_editingFinished()
{
    QFile file(ui->lineEdit_filename->text()+".txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<file.errorString();
        return;
    }
    QTextStream out(&file);
    while(!out.atEnd()){
        fileoldcontent=out.readLine();
        fileoldcontent.push_back("\n");
    }
}


void MainWindow::on_pushButton_Add_text_clicked()
{
    dialogwrite=new SecDialog(this);
    dialogwrite->show();
}


void MainWindow::on_pushButton_Display_content_clicked()
{
    dialogread=new ThirdDialog(this);
    dialogread->show();
}


void MainWindow::on_pushButton_Empty_file_clicked()
{
    QFile file(ui->lineEdit_filename->text()+".txt");
    if(!file.exists()){
        qCritical()<<"file not found";
        return;
    }
    if(!file.open(QIODevice::WriteOnly)){
        qCritical()<<file.errorString();
        return;
    }
    file.close();
}


void MainWindow::on_pushButton_merge2files_clicked()
{
    dialogmerge=new FourthDialog(this);
    dialogmerge->show();
}


void MainWindow::on_pushButton_firsttoupper_clicked()
{
    QFile file(ui->lineEdit_filename->text()+".txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<file.errorString();
        return;
    }
    QString word,filecontent;
    QTextStream out(&file);
    while(!out.atEnd()) {
            QString line = out.readLine();
            if(!line.isEmpty()){
                QStringList words = line.split(" ");
                foreach(QString word, words){
                   filecontent.append(word.toUpper().at(0)+word.toLower().mid(1,word.length()-1));
                   filecontent.push_back(' ');
                }
                filecontent.push_back('\n');
            }
            else{
                filecontent.push_back('\n');
            }
    }
    file.close();
    QFile samefile(ui->lineEdit_filename->text()+".txt");
    if(!samefile.open(QFile::WriteOnly | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<samefile.errorString();
        return;
    }
    QTextStream sameout(&samefile);
    sameout<<filecontent;
    samefile.close();
}


void MainWindow::on_pushButton_toupper_clicked()
{
    QFile file(ui->lineEdit_filename->text()+".txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<file.errorString();
        return;
    }
    QString line,filecontent;
    QTextStream out(&file);
    while(!out.atEnd()){
        line=out.readLine();
        filecontent.append(line.toUpper());
        filecontent.push_back('\n');
    }
    file.close();
    QFile samefile(ui->lineEdit_filename->text()+".txt");
    if(!samefile.open(QFile::WriteOnly | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<samefile.errorString();
        return;
    }
    QTextStream sameout(&samefile);
    sameout<<filecontent;
    samefile.close();
}


void MainWindow::on_pushButton_tolower_clicked()
{
    QFile file(ui->lineEdit_filename->text()+".txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<file.errorString();
        return;
    }
    QString line,filecontent;
    QTextStream out(&file);
    while(!out.atEnd()){
        line=out.readLine();
        filecontent.append(line.toLower());
        filecontent.push_back('\n');
    }
    file.close();
    QFile samefile(ui->lineEdit_filename->text()+".txt");
    if(!samefile.open(QFile::WriteOnly | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<samefile.errorString();
        return;
    }
    QTextStream sameout(&samefile);
    sameout<<filecontent;
    samefile.close();
}


void MainWindow::on_pushButton_searchword_clicked()
{
    searchdialog =new SearchDialog(this);
    searchdialog->show();
}


void MainWindow::on_pushButton_count_words_clicked()
{
   countwordsdia=new CountwDialog(this);
   countwordsdia->show();
}


void MainWindow::on_pushButton_count_characters_clicked()
{
    charsdialog =new CharsDialog(this);
    charsdialog->show();
}


void MainWindow::on_pushButton_count_lines_clicked()
{
    linesdialog=new LinesDialog(this);
    linesdialog->show();
}


void MainWindow::on_pushButton_count_repeatword_clicked()
{
    repeatworddia=new RepeatwDialog(this);
    repeatworddia->show();
}


void MainWindow::on_pushButton_Encrypt_file_clicked()
{
    QFile file(ui->lineEdit_filename->text()+".txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<file.errorString();
        return;
    }
    QString word,filecontent;QChar character;
    QTextStream out(&file);
    while(!out.atEnd()) {
            QString line = out.readLine();
            if(!line.isEmpty()){
                QStringList words = line.split(" ");
                foreach(QString word, words){
                    for(int i=0;i<word.length();i++){
                        character=char(word.at(i).toLatin1()+1);
                        filecontent.append(character);
                    }
                    filecontent.append(' ');
                }
            }
            filecontent.push_back('\n');
    }
    file.close();
    QFile samefile(ui->lineEdit_filename->text()+".txt");
    if(!samefile.open(QFile::WriteOnly | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<samefile.errorString();
        return;
    }
    QTextStream sameout(&samefile);
    sameout<<filecontent;
    samefile.close();
}


void MainWindow::on_pushButton_save_clicked()
{
    tosavefile=new TosaveDialog(this);
    tosavefile->show();
}


void MainWindow::on_pushButton_Decrypt_file_clicked()
{
    QFile file(ui->lineEdit_filename->text()+".txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<file.errorString();
        return;
    }
    QString word,filecontent;QChar character;
    QTextStream out(&file);
    while(!out.atEnd()) {
            QString line = out.readLine();
            if(!line.isEmpty()){
                QStringList words = line.split(" ");
                foreach(QString word, words){
                    for(int i=0;i<word.length();i++){
                        character=char(word.at(i).toLatin1()-1);
                        filecontent.append(character);
                    }
                    filecontent.append(' ');
                }
            }
            filecontent.push_back('\n');
    }
    file.close();
    QFile samefile(ui->lineEdit_filename->text()+".txt");
    if(!samefile.open(QFile::WriteOnly | QFile::Text)){
        qCritical()<<"the first file not exit, I created it for you";
        qCritical()<<samefile.errorString();
        return;
    }
    QTextStream sameout(&samefile);
    sameout<<filecontent;
    samefile.close();
}


void MainWindow::on_pushButton_exit_clicked()
{
    //hide();
    this->close();
}
