#include "page6.h"
#include "ui_page6.h"
#include "page5.h"
#include "global.h"
#include <QDebug>

Page6::Page6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Page6)
{
    ui->setupUi(this);
    if(vec.size() >= 30)
    for(int i = 30; i < vec.size(); i++){
        ui->NameLs->addItem(vec[i].name);
        ui->CinemaLs->addItem(vec[i].cinema);
        ui->QuanLs->addItem(vec[i].quantity);
        ui->PriceLs->addItem(vec[i].price);
    }
}

Page6::~Page6()
{
    delete ui;
}

void Page6::on_pushButton_8_clicked()
{
    Page5 x;
    x.setModal(true);
    this->hide();
    x.exec();
}
