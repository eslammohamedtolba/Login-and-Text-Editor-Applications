#ifndef TOUPPERWORDS_H
#define TOUPPERWORDS_H

#include <QDialog>

namespace Ui {
class Toupperwords;
}

class Toupperwords : public QDialog
{
    Q_OBJECT

public:
    explicit Toupperwords(QWidget *parent = nullptr);
    ~Toupperwords();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Toupperwords *ui;
};

#endif // TOUPPERWORDS_H
