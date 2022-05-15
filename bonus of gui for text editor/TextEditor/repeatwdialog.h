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

private slots:
    void on_pushButton_repeatword_clicked();

private:
    Ui::RepeatwDialog *ui;
};

#endif // REPEATWDIALOG_H
