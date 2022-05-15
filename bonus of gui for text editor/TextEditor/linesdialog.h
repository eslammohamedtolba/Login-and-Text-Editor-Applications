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

private:
    void countlines();
    Ui::LinesDialog *ui;
};

#endif // LINESDIALOG_H
