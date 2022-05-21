#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QString"
#include <QFile>
#include "QStringList"
#include "QChar"
#include <QTextStream>
#include <QFileDialog>
#include "QMessageBox"
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
        fileoldcontent.append(out.readLine());
        fileoldcontent.push_back("\n");
    }
    file.close();
}


void MainWindow::on_pushButton_Add_text_clicked()
{
    file_name=ui->lineEdit_filename->text()+".txt";
    dialogwrite=new SecDialog(file_name,this);
    dialogwrite->show();
}


void MainWindow::on_pushButton_Display_content_clicked()
{
    file_name=ui->lineEdit_filename->text()+".txt";
    dialogread=new ThirdDialog(file_name,this);
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
    emptyfile=new EmptyDialog(this);
    emptyfile->show();
}


void MainWindow::on_pushButton_merge2files_clicked()
{
    file_name=ui->lineEdit_filename->text()+".txt";
    dialogmerge=new FourthDialog(file_name,this);
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
    QString line,filecontent;//QChar character;
    QTextStream out(&file);
    while(!out.atEnd())
    {
        line=out.readLine();
        QStringList words = line.split(" ");
        foreach(QString word, words)
        {
            word=word.toLower();
            filecontent.append(word.mid(0,1).toUpper());
            filecontent.append(word.mid(1,word.length()));
            filecontent.append(' ');
        }
        filecontent.append('\n');
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
    firsttoupper=new Tofirstupper(this);
    firsttoupper->show();
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
    toupperwords=new Toupperwords(this);
    toupperwords->show();
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
    tolowerwords=new Tolowerwords(this);
    tolowerwords->show();
}


void MainWindow::on_pushButton_searchword_clicked()
{
    file_name=ui->lineEdit_filename->text()+".txt";
    searchdialog =new SearchDialog(file_name,this);
    searchdialog->show();
}


void MainWindow::on_pushButton_count_words_clicked()
{
   file_name=ui->lineEdit_filename->text()+".txt";
   countwordsdia=new CountwDialog(file_name,this);
   countwordsdia->show();
}


void MainWindow::on_pushButton_count_characters_clicked()
{
    file_name=ui->lineEdit_filename->text()+".txt";
    charsdialog =new CharsDialog(file_name,this);
    charsdialog->show();
}


void MainWindow::on_pushButton_count_lines_clicked()
{
    file_name=ui->lineEdit_filename->text()+".txt";
    linesdialog=new LinesDialog(file_name,this);
    linesdialog->show();
}


void MainWindow::on_pushButton_count_repeatword_clicked()
{
    file_name=ui->lineEdit_filename->text()+".txt";
    repeatworddia=new RepeatwDialog(file_name,this);
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
    toencryptfile=new Toencryptfile(this);
    toencryptfile->show();
}


void MainWindow::on_pushButton_save_clicked()
{
    file_name=ui->lineEdit_filename->text()+".txt";
    tosavefile=new TosaveDialog(file_name,fileoldcontent,this);
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
    todecryptfile=new Todecryptfile(this);
    todecryptfile->show();
}


void MainWindow::on_pushButton_exit_clicked()
{
    this->close();
}
