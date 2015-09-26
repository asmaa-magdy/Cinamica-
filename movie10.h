#ifndef MOVIE10_H
#define MOVIE10_H

#include <QDialog>

namespace Ui {
class movie10;
}

class movie10 : public QDialog
{
    Q_OBJECT

public:
    explicit movie10(QWidget *parent = 0);
    ~movie10();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie10 *ui;
};

#endif // MOVIE10_H
