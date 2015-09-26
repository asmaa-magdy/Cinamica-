#include "page3.h"
#include "ui_page3.h"
#include "page4.h"
#include "page2.h"
#include <QFile>
#include <QTextStream>
#include "global.h"
#include "movie13.h"
#include "movie14.h"
#include "movie16.h"
#include "movie15.h"
#include "movi17.h"
#include "movie18.h"
#include <QDebug>

Page3::Page3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Page3)
{
    ui->setupUi(this);
    if(check3 == false){
        for(int i = 12; i < 18; i++)
            MD.push_back(vec[i].name);
        check3 = true;
    }
     qDebug() << "size el vector ahooooooooo :D " << MD.size();
    for(int i = 12; i < 18; i++){
        ui->NameLs->addItem(vec[i].name);
        //MD.push_back(vec[i].name);
        ui->CinemaLs->addItem(vec[i].cinema);
        ui->QuanLs->addItem(vec[i].quantity);
        ui->PriceLs->addItem(vec[i].price);

    }

}

Page3::~Page3()
{
    delete ui;
}

void Page3::on_pushButton_7_clicked()
{
    Page4 b;
    b.setModal(true);
    this->hide();
    b.exec();
}

void Page3::on_pushButton_8_clicked()
{
    Page2 p;
    p.setModal(true);
    this->hide();
    p.exec();
}

void Page3::on_pushButton_clicked()
{
    movie13 mov13;
    mov13.setModal(true);
    this->hide();
    mov13.exec();
}

void Page3::on_pushButton_2_clicked()
{
    movie14 mov14;
    mov14.setModal(true);
    this->hide();
    mov14.exec();
}

void Page3::on_pushButton_3_clicked()
{
    movie15 mov15;
    mov15.setModal(true);
    this->hide();
    mov15.exec();
}

void Page3::on_pushButton_4_clicked()
{
    movie16 mov16;
    mov16.setModal(true);
    this->hide();
    mov16.exec();
}

void Page3::on_pushButton_5_clicked()
{
    movi17 mo17;
    mo17.setModal(true);
    this->hide();
    mo17.exec();
}

void Page3::on_pushButton_6_clicked()
{
    movie18 mo18;
    mo18.setModal(true);
    this->hide();
    mo18.exec();
}
