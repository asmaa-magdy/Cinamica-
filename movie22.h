#ifndef MOVIE22_H
#define MOVIE22_H

#include <QDialog>

namespace Ui {
class movie22;
}

class movie22 : public QDialog
{
    Q_OBJECT

public:
    explicit movie22(QWidget *parent = 0);
    ~movie22();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie22 *ui;
};

#endif // MOVIE22_H
