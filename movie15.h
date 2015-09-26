#ifndef MOVIE15_H
#define MOVIE15_H

#include <QDialog>

namespace Ui {
class movie15;
}

class movie15 : public QDialog
{
    Q_OBJECT

public:
    explicit movie15(QWidget *parent = 0);
    ~movie15();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::movie15 *ui;
};

#endif // MOVIE15_H
