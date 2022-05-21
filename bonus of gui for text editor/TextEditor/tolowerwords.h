#ifndef TOLOWERWORDS_H
#define TOLOWERWORDS_H

#include <QDialog>

namespace Ui {
class Tolowerwords;
}

class Tolowerwords : public QDialog
{
    Q_OBJECT

public:
    explicit Tolowerwords(QWidget *parent = nullptr);
    ~Tolowerwords();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Tolowerwords *ui;
};

#endif // TOLOWERWORDS_H
