#ifndef THIRDDIALOG_H
#define THIRDDIALOG_H

#include <QDialog>

namespace Ui {
class ThirdDialog;
}

class ThirdDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ThirdDialog(QWidget *parent = nullptr);
    ~ThirdDialog();

public:
    explicit ThirdDialog(QString file_name,QWidget *parent = nullptr);

private slots:
    void on_pushButton_read_clicked();

private:
    QString myfilename;
    Ui::ThirdDialog *ui;
};

#endif // THIRDDIALOG_H
