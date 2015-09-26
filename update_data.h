
#ifndef UPDATE_DATA_H
#define UPDATE_DATA_H
#include "global.h"

#include <QDialog>

namespace Ui {
class Update_Data;
}

class Update_Data : public QDialog
{
    Q_OBJECT

public:
    explicit Update_Data(QWidget *parent = 0);
    void Datadisplay(Movie M);
    void on_pushButton_clicked_MM(int i,Movie m);
    ~Update_Data();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Update_Data *ui;
};

#endif // UPDATE_DATA_H

