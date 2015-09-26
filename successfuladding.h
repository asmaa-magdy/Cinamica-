#ifndef SUCCESSFULADDING_H
#define SUCCESSFULADDING_H

#include <QDialog>

namespace Ui {
class SuccessfulAdding;
}

class SuccessfulAdding : public QDialog
{
    Q_OBJECT

public:
    explicit SuccessfulAdding(QWidget *parent = 0);
    ~SuccessfulAdding();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SuccessfulAdding *ui;
};

#endif // SUCCESSFULADDING_H
