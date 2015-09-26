#include "page6cust.h"
#include "ui_page6cust.h"
#include "page5cust.h"
#include "global.h"

Page6Cust::Page6Cust(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Page6Cust)
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

Page6Cust::~Page6Cust()
{
    delete ui;
}

void Page6Cust::on_pushButton_8_clicked()
{
    Page5Cust p;
    p.setModal(true);
    this->hide();
    p.exec();
}
