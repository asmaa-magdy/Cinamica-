#ifndef MOVIE14_H
#define MOVIE14_H

#include <QDialog>

namespace Ui {
class movie14;
}

class movie14 : public QDialog
{
    Q_OBJECT

public:
    explicit movie14(QWidget *parent = 0);
    ~movie14();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie14 *ui;
};

#endif // MOVIE14_H
