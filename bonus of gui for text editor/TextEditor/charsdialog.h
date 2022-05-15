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

private:
    void countchars();
    Ui::CharsDialog *ui;
};

#endif // CHARSDIALOG_H
