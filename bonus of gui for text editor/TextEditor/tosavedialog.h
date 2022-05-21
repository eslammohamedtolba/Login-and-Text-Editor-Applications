#ifndef TOSAVEDIALOG_H
#define TOSAVEDIALOG_H

#include <QDialog>

namespace Ui {
class TosaveDialog;
}

class TosaveDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TosaveDialog(QWidget *parent = nullptr);
    ~TosaveDialog();

public:
    explicit TosaveDialog(QString filename,QString fileoldcontent,QWidget *parent = nullptr);

private slots:
    void on_pushButton_save_clicked();

    void on_radioButton_different_pressed();

    void on_radioButton_same_pressed();

    void on_lineEdit_save_textChanged(const QString &arg1);

private:
    QString myfilename;
    QString myfilecontent;
    Ui::TosaveDialog *ui;
};

#endif // TOSAVEDIALOG_H
