#ifndef MENU_CUSTOMER_H
#define MENU_CUSTOMER_H

#include <QDialog>

namespace Ui {
class menu_customer;
}

class menu_customer : public QDialog
{
    Q_OBJECT

public:
    explicit menu_customer(QWidget *parent = 0);
    ~menu_customer();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::menu_customer *ui;
};

#endif // MENU_CUSTOMER_H
