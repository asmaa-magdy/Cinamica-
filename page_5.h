#ifndef PAGE_5_H
#define PAGE_5_H

#include <QDialog>

namespace Ui {
class Page_5;
}

class Page_5 : public QDialog
{
    Q_OBJECT

public:
    explicit Page_5(QWidget *parent = 0);
    ~Page_5();

private slots:
    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Page_5 *ui;
};

#endif // PAGE_5_H
