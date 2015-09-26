#ifndef MOVIE8_H
#define MOVIE8_H

#include <QDialog>

namespace Ui {
class movie8;
}

class movie8 : public QDialog
{
    Q_OBJECT

public:
    explicit movie8(QWidget *parent = 0);
    ~movie8();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie8 *ui;
};

#endif // MOVIE8_H
