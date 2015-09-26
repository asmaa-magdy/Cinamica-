#ifndef PAGE5CUST_H
#define PAGE5CUST_H

#include <QDialog>

namespace Ui {
class Page5Cust;
}

class Page5Cust : public QDialog
{
    Q_OBJECT

public:
    explicit Page5Cust(QWidget *parent = 0);
    ~Page5Cust();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Page5Cust *ui;
};

#endif // PAGE5CUST_H
