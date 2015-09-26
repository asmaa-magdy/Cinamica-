#ifndef MOVIE7_H
#define MOVIE7_H

#include <QDialog>

namespace Ui {
class movie7;
}

class movie7 : public QDialog
{
    Q_OBJECT

public:
    explicit movie7(QWidget *parent = 0);
    ~movie7();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie7 *ui;
};

#endif // MOVIE7_H
