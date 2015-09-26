#ifndef MOVIE13_H
#define MOVIE13_H

#include <QDialog>

namespace Ui {
class movie13;
}

class movie13 : public QDialog
{
    Q_OBJECT

public:
    explicit movie13(QWidget *parent = 0);
    ~movie13();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie13 *ui;
};

#endif // MOVIE13_H
