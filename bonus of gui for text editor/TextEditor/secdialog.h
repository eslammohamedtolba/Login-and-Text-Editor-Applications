#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

public:
    explicit SecDialog(QString filename,QWidget *parent = nullptr);

private slots:
    void on_pushButton_write_clicked();

private:
    QString myfilename;
    Ui::SecDialog *ui;
};

#endif // SECDIALOG_H
