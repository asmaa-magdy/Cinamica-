#ifndef MOVIE21_H
#define MOVIE21_H

#include <QDialog>

namespace Ui {
class movie21;
}

class movie21 : public QDialog
{
    Q_OBJECT

public:
    explicit movie21(QWidget *parent = 0);
    ~movie21();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie21 *ui;
};

#endif // MOVIE21_H
