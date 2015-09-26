#include "page2.h"
#include "ui_page2.h"
#include "view.h"
#include <QFile>
#include <QTextStream>
#include "page3.h"
#include "global.h"
#include "movie7.h"
#include "movie8.h"
#include "movie9.h"
#include "movie10.h"
#include "movie11.h"
#include "movie12.h"
#include <QDebug>

Page2::Page2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Page2)
{
    ui->setupUi(this);
    if(check2 == false){
        for(int i = 6; i < 12; i++)
            MD.push_back(vec[i].name);
        check2 = true;
    }
     qDebug() << "size el vector ahooooooooo :D " << MD.size();
    for(int i = 6; i < 12; i++){
        ui->NameLs->addItem(vec[i].name);
        //MD.push_back(vec[i].name);
        ui->CinemaLs->addItem(vec[i].cinema);
        ui->QuanLs->addItem(vec[i].quantity);
        ui->PriceLs->addItem(vec[i].price);

    }


}

Page2::~Page2()
{
    delete ui;
}

void Page2::on_pushButton_8_clicked()
{
    view a;
    a.setModal(true);
    this->hide();
    a.exec();
}

void Page2::on_pushButton_7_clicked()
{
    Page3 p;
    p.setModal(true);
    this->hide();
    p.exec();
}

void Page2::on_pushButton_clicked()
{
    movie7 mov7;
    mov7.setModal(true);
    this->hide();
    mov7.exec();
}

void Page2::on_pushButton_2_clicked()
{
    movie8 mov8;
    mov8.setModal(true);
    this->hide();
    mov8.exec();
}

void Page2::on_pushButton_3_clicked()
{
    movie9 mov9;
    mov9.setModal(true);
    this->hide();
    mov9.exec();
}

void Page2::on_pushButton_4_clicked()
{
    movie10 mov10;
    mov10.setModal(true);
    this->hide();
    mov10.exec();
}

void Page2::on_pushButton_5_clicked()
{
    movie11 mov11;
    mov11.setModal(true);
    this->hide();
    mov11.exec();
}

void Page2::on_pushButton_6_clicked()
{
    movie12 mov12;
    mov12.setModal(true);
    this->hide();
    mov12.exec();
}
