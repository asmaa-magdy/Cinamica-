#ifndef ANOTHERBYE_H
#define ANOTHERBYE_H

#include <QDialog>

namespace Ui {
class AnotherBye;
}

class AnotherBye : public QDialog
{
    Q_OBJECT

public:
    explicit AnotherBye(QWidget *parent = 0);
    ~AnotherBye();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AnotherBye *ui;
};

#endif // ANOTHERBYE_H
