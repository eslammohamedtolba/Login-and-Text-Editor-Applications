#ifndef LINESDIALOG_H
#define LINESDIALOG_H

#include <QDialog>

namespace Ui {
class LinesDialog;
}

class LinesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LinesDialog(QWidget *parent = nullptr);
    ~LinesDialog();

public:
    explicit LinesDialog(QString file_name,QWidget *parent = nullptr);

private slots:
    void on_pushButton_toexit_clicked();

private:
    QString myfilename;
    void countlines();
    Ui::LinesDialog *ui;
};

#endif // LINESDIALOG_H
