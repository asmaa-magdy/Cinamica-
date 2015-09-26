#ifndef MOVIE23_H
#define MOVIE23_H

#include <QDialog>

namespace Ui {
class movie23;
}

class movie23 : public QDialog
{
    Q_OBJECT

public:
    explicit movie23(QWidget *parent = 0);
    ~movie23();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie23 *ui;
};

#endif // MOVIE23_H
