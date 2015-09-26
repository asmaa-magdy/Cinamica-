#ifndef MOVIE25_H
#define MOVIE25_H

#include <QDialog>

namespace Ui {
class movie25;
}

class movie25 : public QDialog
{
    Q_OBJECT

public:
    explicit movie25(QWidget *parent = 0);
    ~movie25();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie25 *ui;
};

#endif // MOVIE25_H
