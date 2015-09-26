#include "viewcust.h"
#include "ui_viewcust.h"
#include "page2cust.h"
#include "menu_customer.h"
#include <QFile>
#include <QTextStream>
#include "movie1.h"
#include "movie2.h"
#include "movie3.h"
#include "movie4.h"
#include "movie5.h"
#include "movie6.h"
#include "global.h"
#include <QDebug>

viewCust::viewCust(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewCust)
{
    ui->setupUi(this);
    for(int i = 0; i < 6; i++){
        qDebug() << "howa el loop  " << vec[i].name << endl;
        ui->NameLs->addItem(vec[i].name);
        MD.push_back(vec[i].name);
        ui->CinemaLs->addItem(vec[i].cinema);
        ui->QuanLs->addItem(vec[i].quantity);
        ui->PriceLs->addItem(vec[i].price);
    }

}

viewCust::~viewCust()
{
    delete ui;
}

void viewCust::on_pushButton_7_clicked()
{
    Page2Cust p;
    p.setModal(true);
    this->hide();
    p.exec();
}

void viewCust::on_pushButton_8_clicked()
{
    menu_customer m;
    m.setModal(true);
    this->hide();
    m.exec();
}

void viewCust::on_pushButton_clicked()
{
    Movie1 mov1;
    mov1.setModal(true);
    this->hide();
    mov1.exec();
}

void viewCust::on_pushButton_2_clicked()
{
    movie2 mov2;
    mov2.setModal(true);
    this->hide();
    mov2.exec();
}

void viewCust::on_pushButton_6_clicked()
{
    movie3 mov3;
    mov3.setModal(true);
    this->hide();
    mov3.exec();
}

void viewCust::on_pushButton_5_clicked()
{
    movie4 mov4;
    mov4.setModal(true);
    this->hide();
    mov4.exec();
}

void viewCust::on_pushButton_3_clicked()
{
    movie5 mov5;
    mov5.setModal(true);
    this->hide();
    mov5.exec();
}

void viewCust::on_pushButton_4_clicked()
{
    movie6 mov6;
    mov6.setModal(true);
    this->hide();
    mov6.exec();
}
