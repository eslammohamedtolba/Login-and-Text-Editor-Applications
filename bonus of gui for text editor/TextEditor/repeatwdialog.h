#ifndef REPEATWDIALOG_H
#define REPEATWDIALOG_H

#include <QDialog>

namespace Ui {
class RepeatwDialog;
}

class RepeatwDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RepeatwDialog(QWidget *parent = nullptr);
    ~RepeatwDialog();

public:
    explicit RepeatwDialog(QString file_name,QWidget *parent = nullptr);

private slots:
    void on_pushButton_repeatword_clicked();

    void on_pushButton_toexit_clicked();

private:
    QString myfilename;
    Ui::RepeatwDialog *ui;
};

#endif // REPEATWDIALOG_H
