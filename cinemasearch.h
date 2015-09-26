#ifndef CINEMASEARCH_H
#define CINEMASEARCH_H

#include <QDialog>

namespace Ui {
class CinemaSearch;
}

class CinemaSearch : public QDialog
{
    Q_OBJECT

public:
    explicit CinemaSearch(QWidget *parent = 0);
    ~CinemaSearch();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::CinemaSearch *ui;
};

#endif // CINEMASEARCH_H
