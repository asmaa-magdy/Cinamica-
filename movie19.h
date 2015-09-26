#ifndef MOVIE19_H
#define MOVIE19_H

#include <QDialog>

namespace Ui {
class movie19;
}

class movie19 : public QDialog
{
    Q_OBJECT

public:
    explicit movie19(QWidget *parent = 0);
    ~movie19();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie19 *ui;
};

#endif // MOVIE19_H
