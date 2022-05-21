#ifndef FOURTHDIALOG_H
#define FOURTHDIALOG_H

#include <QDialog>

namespace Ui {
class FourthDialog;
}

class FourthDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FourthDialog(QWidget *parent = nullptr);
    ~FourthDialog();

public:
    explicit FourthDialog(QString file_name,QWidget *parent = nullptr);

private slots:
    void on_pushButton_merge_clicked();

private:
    QString myfilename;
    Ui::FourthDialog *ui;
};

#endif // FOURTHDIALOG_H
