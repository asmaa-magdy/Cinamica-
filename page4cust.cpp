#include "page4cust.h"
#include "ui_page4cust.h"
#include "page5cust.h"
#include "page3cust.h"
#include <QFile>
#include <QTextStream>
#include "global.h"

Page4Cust::Page4Cust(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Page4Cust)
{
    ui->setupUi(this);
    for(int i = 18; i < 24; i++){
        ui->NameLs->addItem(vec[i].name);
        ui->CinemaLs->addItem(vec[i].cinema);
        ui->QuanLs->addItem(vec[i].quantity);
        ui->PriceLs->addItem(vec[i].price);
    }
}

Page4Cust::~Page4Cust()
{
    delete ui;
}

void Page4Cust::on_pushButton_7_clicked()
{
    Page5Cust p;
    p.setModal(true);
    this->hide();
    p.exec();
}

void Page4Cust::on_pushButton_8_clicked()
{
    Page3Cust p;
    p.setModal(true);
    this->hide();
    p.exec();
}
