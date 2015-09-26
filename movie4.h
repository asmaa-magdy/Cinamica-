#ifndef MOVIE4_H
#define MOVIE4_H

#include <QDialog>

namespace Ui {
class movie4;
}

class movie4 : public QDialog
{
    Q_OBJECT

public:
    explicit movie4(QWidget *parent = 0);
    ~movie4();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie4 *ui;
};

#endif // MOVIE4_H
