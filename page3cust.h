#ifndef PAGE3CUST_H
#define PAGE3CUST_H

#include <QDialog>

namespace Ui {
class Page3Cust;
}

class Page3Cust : public QDialog
{
    Q_OBJECT

public:
    explicit Page3Cust(QWidget *parent = 0);
    ~Page3Cust();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Page3Cust *ui;
};

#endif // PAGE3CUST_H
