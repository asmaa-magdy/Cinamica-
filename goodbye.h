#ifndef GOODBYE_H
#define GOODBYE_H

#include <QDialog>

namespace Ui {
class GOODBYE;
}

class GOODBYE : public QDialog
{
    Q_OBJECT

public:
    explicit GOODBYE(QWidget *parent = 0);
    ~GOODBYE();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GOODBYE *ui;
};

#endif // GOODBYE_H
