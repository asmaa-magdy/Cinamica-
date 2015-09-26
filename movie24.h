#ifndef MOVIE24_H
#define MOVIE24_H

#include <QDialog>

namespace Ui {
class movie24;
}

class movie24 : public QDialog
{
    Q_OBJECT

public:
    explicit movie24(QWidget *parent = 0);
    ~movie24();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie24 *ui;
};

#endif // MOVIE24_H
