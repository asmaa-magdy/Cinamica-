#ifndef MOVIE9_H
#define MOVIE9_H

#include <QDialog>

namespace Ui {
class movie9;
}

class movie9 : public QDialog
{
    Q_OBJECT

public:
    explicit movie9(QWidget *parent = 0);
    ~movie9();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie9 *ui;
};

#endif // MOVIE9_H
