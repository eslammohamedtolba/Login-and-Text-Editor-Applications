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

private:
    void countwords();
    Ui::CountwDialog *ui;
};

#endif // COUNTWDIALOG_H
