#ifndef MOVIE6_H
#define MOVIE6_H

#include <QDialog>

namespace Ui {
class movie6;
}

class movie6 : public QDialog
{
    Q_OBJECT

public:
    explicit movie6(QWidget *parent = 0);
    ~movie6();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie6 *ui;
};

#endif // MOVIE6_H
