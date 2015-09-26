#ifndef MOVIE1_H
#define MOVIE1_H

#include <QDialog>

namespace Ui {
class Movie1;
}

class Movie1 : public QDialog
{
    Q_OBJECT

public:
    explicit Movie1(QWidget *parent = 0);
    ~Movie1();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Movie1 *ui;
};

#endif // MOVIE1_H
