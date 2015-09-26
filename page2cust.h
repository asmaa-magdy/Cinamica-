#ifndef PAGE2CUST_H
#define PAGE2CUST_H

#include <QDialog>

namespace Ui {
class Page2Cust;
}

class Page2Cust : public QDialog
{
    Q_OBJECT

public:
    explicit Page2Cust(QWidget *parent = 0);
    ~Page2Cust();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Page2Cust *ui;
};

#endif // PAGE2CUST_H
