
#ifndef UPDATE_H
#define UPDATE_H
#include "global.h"
#include "update_data.h"

#include <QDialog>

namespace Ui {
class Update;
}

class Update : public QDialog
{
    Q_OBJECT

public:
    explicit Update(QWidget *parent = 0);
    ~Update();
    Update_Data *u;


private slots:
    void on_pushButton_clicked();
    //void Datadisplay(Movie);

    void on_pushButton_3_clicked();

private:
    Ui::Update *ui;
};

#endif // UPDATE_H

