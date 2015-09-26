#ifndef PAGE_6_H
#define PAGE_6_H

#include <QDialog>

namespace Ui {
class Page_6;
}

class Page_6 : public QDialog
{
    Q_OBJECT

public:
    explicit Page_6(QWidget *parent = 0);
    ~Page_6();

private:
    Ui::Page_6 *ui;
};

#endif // PAGE_6_H
