#ifndef MOVIE5_H
#define MOVIE5_H

#include <QDialog>

namespace Ui {
class movie5;
}

class movie5 : public QDialog
{
    Q_OBJECT

public:
    explicit movie5(QWidget *parent = 0);
    ~movie5();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie5 *ui;
};

#endif // MOVIE5_H
