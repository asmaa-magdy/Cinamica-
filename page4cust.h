#ifndef PAGE4CUST_H
#define PAGE4CUST_H

#include <QDialog>

namespace Ui {
class Page4Cust;
}

class Page4Cust : public QDialog
{
    Q_OBJECT

public:
    explicit Page4Cust(QWidget *parent = 0);
    ~Page4Cust();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Page4Cust *ui;
};

#endif // PAGE4CUST_H
