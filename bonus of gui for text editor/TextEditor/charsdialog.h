#ifndef CHARSDIALOG_H
#define CHARSDIALOG_H

#include <QDialog>

namespace Ui {
class CharsDialog;
}

class CharsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CharsDialog(QWidget *parent = nullptr);
    ~CharsDialog();

public:
    explicit CharsDialog(QString file_name,QWidget *parent = nullptr);

private slots:
    void on_pushButton_toexit_clicked();

private:
    QString myfilename;
    void countchars();
    Ui::CharsDialog *ui;
};

#endif // CHARSDIALOG_H
