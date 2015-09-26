#ifndef NEWADDING_H
#define NEWADDING_H
#include <QDialog>

//extern QVector <Movie> CINAMIKA;

namespace Ui {
class NewAdding;
}

class NewAdding:public QDialog
{
    Q_OBJECT

public:
    explicit NewAdding(QWidget *parent = 0);
    ~NewAdding();
//    friend class General;

private slots:
    void on_pushButton_clicked();

private:
    Ui::NewAdding *ui;
};

#endif // NEWADDING_H
