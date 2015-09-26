#ifndef MOVIE12_H
#define MOVIE12_H

#include <QDialog>

namespace Ui {
class movie12;
}

class movie12 : public QDialog
{
    Q_OBJECT

public:
    explicit movie12(QWidget *parent = 0);
    ~movie12();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie12 *ui;
};

#endif // MOVIE12_H
