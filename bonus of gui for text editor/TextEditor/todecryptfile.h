#ifndef TODECRYPTFILE_H
#define TODECRYPTFILE_H

#include <QDialog>

namespace Ui {
class Todecryptfile;
}

class Todecryptfile : public QDialog
{
    Q_OBJECT

public:
    explicit Todecryptfile(QWidget *parent = nullptr);
    ~Todecryptfile();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Todecryptfile *ui;
};

#endif // TODECRYPTFILE_H
