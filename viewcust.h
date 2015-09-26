#ifndef VIEWCUST_H
#define VIEWCUST_H

#include <QDialog>

namespace Ui {
class viewCust;
}

class viewCust : public QDialog
{
    Q_OBJECT

public:
    explicit viewCust(QWidget *parent = 0);
    ~viewCust();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::viewCust *ui;
};

#endif // VIEWCUST_H
