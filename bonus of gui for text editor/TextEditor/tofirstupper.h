#ifndef TOFIRSTUPPER_H
#define TOFIRSTUPPER_H

#include <QDialog>

namespace Ui {
class Tofirstupper;
}

class Tofirstupper : public QDialog
{
    Q_OBJECT

public:
    explicit Tofirstupper(QWidget *parent = nullptr);
    ~Tofirstupper();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Tofirstupper *ui;
};

#endif // TOFIRSTUPPER_H
