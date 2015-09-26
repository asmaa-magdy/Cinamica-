#ifndef PAGE5_H
#define PAGE5_H
#include "general.h"

#include <QDialog>

namespace Ui {
class Page5;
}

class Page5 : public QDialog
{
    Q_OBJECT

public:
    explicit Page5(QWidget *parent = 0);
    ~Page5();
   // friend class General;
private slots:
    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Page5 *ui;
};

#endif // PAGE5_H
