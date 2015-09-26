#ifndef DELETEMOVIE_H
#define DELETEMOVIE_H

#include <QDialog>

namespace Ui {
class DeleteMovie;
}

class DeleteMovie : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteMovie(QWidget *parent = 0);
    ~DeleteMovie();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::DeleteMovie *ui;
};

#endif // DELETEMOVIE_H
