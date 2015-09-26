#ifndef MOVIE20_H
#define MOVIE20_H

#include <QDialog>

namespace Ui {
class movie20;
}

class movie20 : public QDialog
{
    Q_OBJECT

public:
    explicit movie20(QWidget *parent = 0);
    ~movie20();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie20 *ui;
};

#endif // MOVIE20_H
