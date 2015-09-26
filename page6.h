#ifndef PAGE6_H
#define PAGE6_H

#include <QDialog>

namespace Ui {
class Page6;
}

class Page6 : public QDialog
{
    Q_OBJECT

public:
    explicit Page6(QWidget *parent = 0);
    ~Page6();

private slots:
    void on_pushButton_8_clicked();

private:
    Ui::Page6 *ui;
};

#endif // PAGE6_H
