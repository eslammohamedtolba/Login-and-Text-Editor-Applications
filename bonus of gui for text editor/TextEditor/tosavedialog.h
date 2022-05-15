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

private slots:
    void on_pushButton_save_clicked();

private:
    Ui::TosaveDialog *ui;
};

#endif // TOSAVEDIALOG_H
