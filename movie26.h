#ifndef MOVIE26_H
#define MOVIE26_H

#include <QDialog>

namespace Ui {
class movie26;
}

class movie26 : public QDialog
{
    Q_OBJECT

public:
    explicit movie26(QWidget *parent = 0);
    ~movie26();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie26 *ui;
};

#endif // MOVIE26_H
