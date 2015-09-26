#ifndef PAGE3_H
#define PAGE3_H

#include <QDialog>

namespace Ui {
class Page3;
}

class Page3 : public QDialog
{
    Q_OBJECT

public:
    explicit Page3(QWidget *parent = 0);
    ~Page3();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Page3 *ui;
};

#endif // PAGE3_H
