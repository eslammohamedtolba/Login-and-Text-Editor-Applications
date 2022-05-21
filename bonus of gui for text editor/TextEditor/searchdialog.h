#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>

namespace Ui {
class SearchDialog;
}

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = nullptr);
    ~SearchDialog();

public:
    explicit SearchDialog(QString file_name,QWidget *parent = nullptr);

private slots:
    void on_pushButton_search_clicked();
    void on_pushButton_toexit_clicked();

private:
    QString myfilename;
    Ui::SearchDialog *ui;
};

#endif // SEARCHDIALOG_H
