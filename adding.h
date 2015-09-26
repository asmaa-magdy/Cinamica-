#ifndef ADDING_H
#define ADDING_H

#include <QDialog>

namespace Ui {
class Adding;
}

class Adding : public QDialog
{
    Q_OBJECT

public:
    explicit Adding(QWidget *parent = 0);
    ~Adding();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Adding *ui;
};

#endif // ADDING_H
