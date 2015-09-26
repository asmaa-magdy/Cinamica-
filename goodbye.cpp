#include "goodbye.h"
#include "ui_goodbye.h"
#include "password.h"
#include "global.h"

GOODBYE::GOODBYE(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GOODBYE)
{
    ui->setupUi(this);
    fromVecToFile();
}

GOODBYE::~GOODBYE()
{
    delete ui;
}

void GOODBYE::on_pushButton_clicked()
{
   this->hide();
}
