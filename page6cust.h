#ifndef PAGE6CUST_H
#define PAGE6CUST_H

#include <QDialog>

namespace Ui {
class Page6Cust;
}

class Page6Cust : public QDialog
{
    Q_OBJECT

public:
    explicit Page6Cust(QWidget *parent = 0);
    ~Page6Cust();

private slots:
    void on_pushButton_8_clicked();

private:
    Ui::Page6Cust *ui;
};

#endif // PAGE6CUST_H
