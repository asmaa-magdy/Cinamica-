#ifndef PAGE4_H
#define PAGE4_H

#include <QDialog>

namespace Ui {
class Page4;
}

class Page4 : public QDialog
{
    Q_OBJECT

public:
    explicit Page4(QWidget *parent = 0);
    ~Page4();

private slots:
    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Page4 *ui;
};

#endif // PAGE4_H
