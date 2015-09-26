#include "page4.h"
#include "ui_page4.h"
#include <QFile>
#include <QTextStream>
#include "page3.h"
#include "page5.h"
#include "global.h"
#include <QDebug>
#include "movie19.h"
#include "movie20.h"
#include "movie21.h"
#include "movie22.h"
#include "movie23.h"
#include "movie24.h"

Page4::Page4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Page4)
{
    ui->setupUi(this);
    if(check4 == false){
        for(int i = 18; i < 24; i++)
            MD.push_back(vec[i].name);
        check4 = true;
    }
     qDebug() << "size el vector ahooooooooo :D " << MD.size();
    for(int i = 18; i < 24; i++){
        ui->NameLs->addItem(vec[i].name);
        //MD.push_back(vec[i].name);
        ui->CinemaLs->addItem(vec[i].cinema);
        ui->QuanLs->addItem(vec[i].quantity);
        ui->PriceLs->addItem(vec[i].price);

    }


}

Page4::~Page4()
{
    delete ui;
}

void Page4::on_pushButton_8_clicked()
{
    Page3 a;
    a.setModal(true);
    this->hide();
    a.exec();
}

void Page4::on_pushButton_7_clicked()
{
    Page5 k;
    k.setModal(true);
    this->hide();
    k.exec();
}

void Page4::on_pushButton_clicked()
{
    movie19 mo19;
    mo19.setModal(true);
    this->hide();
    mo19.exec();
}

void Page4::on_pushButton_2_clicked()
{
    movie20 mov20;
    mov20.setModal(true);
    this->hide();
    mov20.exec();
}

void Page4::on_pushButton_3_clicked()
{
    movie21 mov21;
    mov21.setModal(true);
    this->hide();
    mov21.exec();
}

void Page4::on_pushButton_4_clicked()
{
    movie22 mov22;
    mov22.setModal(true);
    this->hide();
    mov22.exec();
}

void Page4::on_pushButton_5_clicked()
{
    movie23 mov23;
    mov23.setModal(true);
    this->hide();
    mov23.exec();
}

void Page4::on_pushButton_6_clicked()
{
    movie24 mov24;
    mov24.setModal(true);
    this->hide();
    mov24.exec();
}
