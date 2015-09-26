#include "page5.h"
#include "ui_page5.h"
#include "page4.h"
#include "page6.h"
#include <QFile>
#include <QTextStream>
#include "global.h"
#include <QDebug>
#include "movie25.h"
#include "movie26.h"

Page5::Page5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Page5)
{
    ui->setupUi(this);
    if(check5 == false){
        for(int i = 24; i <vec.size(); i++)
            MD.push_back(vec[i].name);
        check5 = true;
    }
     qDebug() << "size el vector ahooooooooo :D " << MD.size();
    for(int i = 24; i < vec.size(); i++){
        ui->NameLs->addItem(vec[i].name);
        //MD.push_back(vec[i].name);
        ui->CinemaLs->addItem(vec[i].cinema);
        ui->QuanLs->addItem(vec[i].quantity);
        ui->PriceLs->addItem(vec[i].price);

    }
}

Page5::~Page5()
{
    delete ui;
}

void Page5::on_pushButton_8_clicked()
{
    Page4 m;
    m.setModal(true);
    this->hide();
    m.exec();
}

void Page5::on_pushButton_7_clicked()
{
    Page6 v;
    v.setModal(true);
    this->hide();
    v.exec();
}

void Page5::on_pushButton_clicked()
{
    movie25 mov25;
    mov25.setModal(true);
    this->hide();
    mov25.exec();
}

void Page5::on_pushButton_2_clicked()
{
    movie26 mov26;
    mov26.setModal(true);
    this->hide();
    mov26.exec();
}
