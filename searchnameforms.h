#ifndef SEARCHNAMEFORMS_H
#define SEARCHNAMEFORMS_H

#include <QDialog>

namespace Ui {
class SearchNameForms;
}

class SearchNameForms : public QDialog
{
    Q_OBJECT

public:
    explicit SearchNameForms(QWidget *parent = 0);
    ~SearchNameForms();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SearchNameForms *ui;
};

#endif // SEARCHNAMEFORMS_H
