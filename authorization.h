#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QDialog>

namespace Ui {
class authorization;
}

class authorization : public QDialog
{
    Q_OBJECT

public:
    explicit authorization(QWidget *parent = 0);
    ~authorization();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::authorization *ui;
};

#endif // AUTHORIZATION_H
