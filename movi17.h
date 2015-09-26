#ifndef MOVI17_H
#define MOVI17_H

#include <QDialog>

namespace Ui {
class movi17;
}

class movi17 : public QDialog
{
    Q_OBJECT

public:
    explicit movi17(QWidget *parent = 0);
    ~movi17();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movi17 *ui;
};

#endif // MOVI17_H
