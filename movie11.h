#ifndef MOVIE11_H
#define MOVIE11_H

#include <QDialog>

namespace Ui {
class movie11;
}

class movie11 : public QDialog
{
    Q_OBJECT

public:
    explicit movie11(QWidget *parent = 0);
    ~movie11();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie11 *ui;
};

#endif // MOVIE11_H
