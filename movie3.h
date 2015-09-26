#ifndef MOVIE3_H
#define MOVIE3_H

#include <QDialog>

namespace Ui {
class movie3;
}

class movie3 : public QDialog
{
    Q_OBJECT

public:
    explicit movie3(QWidget *parent = 0);
    ~movie3();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie3 *ui;
};

#endif // MOVIE3_H
