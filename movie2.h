#ifndef MOVIE2_H
#define MOVIE2_H

#include <QDialog>

namespace Ui {
class movie2;
}

class movie2 : public QDialog
{
    Q_OBJECT

public:
    explicit movie2(QWidget *parent = 0);
    ~movie2();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie2 *ui;
};

#endif // MOVIE2_H
