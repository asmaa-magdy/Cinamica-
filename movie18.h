#ifndef MOVIE18_H
#define MOVIE18_H

#include <QDialog>

namespace Ui {
class movie18;
}

class movie18 : public QDialog
{
    Q_OBJECT

public:
    explicit movie18(QWidget *parent = 0);
    ~movie18();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie18 *ui;
};

#endif // MOVIE18_H
