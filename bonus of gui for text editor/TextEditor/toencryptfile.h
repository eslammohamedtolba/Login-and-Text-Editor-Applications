#ifndef TOENCRYPTFILE_H
#define TOENCRYPTFILE_H

#include <QDialog>

namespace Ui {
class Toencryptfile;
}

class Toencryptfile : public QDialog
{
    Q_OBJECT

public:
    explicit Toencryptfile(QWidget *parent = nullptr);
    ~Toencryptfile();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Toencryptfile *ui;
};

#endif // TOENCRYPTFILE_H
