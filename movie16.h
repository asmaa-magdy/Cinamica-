#ifndef MOVIE16_H
#define MOVIE16_H

#include <QDialog>

namespace Ui {
class movie16;
}

class movie16 : public QDialog
{
    Q_OBJECT

public:
    explicit movie16(QWidget *parent = 0);
    ~movie16();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie16 *ui;
};

#endif // MOVIE16_H
