#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "secdialog.h"
#include "thirddialog.h"
#include "fourthdialog.h"
#include "searchdialog.h"
#include "linesdialog.h"
#include "charsdialog.h"
#include "repeatwdialog.h"
#include "countwdialog.h"
#include "tosavedialog.h"
#include "emptydialog.h"
#include "tofirstupper.h"
#include "toupperwords.h"
#include "tolowerwords.h"
#include "toencryptfile.h"
#include "todecryptfile.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QString file_name;
    QString fileoldcontent;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //here are the global variables declared

private slots:
    void on_pushButton_Add_text_clicked();

    void on_pushButton_Display_content_clicked();

    void on_pushButton_Empty_file_clicked();

    void on_pushButton_merge2files_clicked();

    void on_pushButton_firsttoupper_clicked();

    void on_pushButton_toupper_clicked();

    void on_pushButton_tolower_clicked();

    void on_pushButton_searchword_clicked();

    void on_pushButton_count_words_clicked();

    void on_pushButton_count_characters_clicked();

    void on_pushButton_count_lines_clicked();

    void on_pushButton_count_repeatword_clicked();

    void on_pushButton_Encrypt_file_clicked();

    void on_pushButton_save_clicked();

    void on_pushButton_Decrypt_file_clicked();

    void on_pushButton_exit_clicked();

    void on_lineEdit_filename_editingFinished();

    void on_lineEdit_filename_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    SecDialog *dialogwrite;
    ThirdDialog *dialogread;
    FourthDialog *dialogmerge;
    SearchDialog *searchdialog;
    LinesDialog *linesdialog;
    CharsDialog *charsdialog;
    RepeatwDialog *repeatworddia;
    CountwDialog *countwordsdia;
    TosaveDialog *tosavefile;
    EmptyDialog *emptyfile;
    Tofirstupper *firsttoupper;
    Toupperwords *toupperwords;
    Tolowerwords *tolowerwords;
    Toencryptfile *toencryptfile;
    Todecryptfile *todecryptfile;
};
#endif // MAINWINDOW_H
