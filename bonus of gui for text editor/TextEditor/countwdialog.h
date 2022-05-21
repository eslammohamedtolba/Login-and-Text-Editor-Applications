#ifndef COUNTWDIALOG_H
#define COUNTWDIALOG_H

#include <QDialog>

namespace Ui {
class CountwDialog;
}

class CountwDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CountwDialog(QWidget *parent = nullptr);
    ~CountwDialog();

public:
    explicit CountwDialog(QString file_name,QWidget *parent = nullptr);

private slots:
    void on_pushButton_toexit_clicked();

private:
    QString myfilename;
    void countwords();
    Ui::CountwDialog *ui;
};

#endif // COUNTWDIALOG_H
