#ifndef NAMESEARCH_H
#define NAMESEARCH_H

#include <QDialog>

namespace Ui {
class NameSearch;
}

class NameSearch : public QDialog
{
    Q_OBJECT

public:
    explicit NameSearch(QWidget *parent = 0);
    ~NameSearch();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::NameSearch *ui;
};

#endif // NAMESEARCH_H
