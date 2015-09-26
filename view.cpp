#include "view.h"
#include "ui_view.h"
#include <QTableView>
#include <QAbstractItemModel>
#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>
#include <QLabel>
#include "page2.h"
#include "menu.h"
#include "global.h"
#include "movie1.h"
#include "movie2.h"
#include "movie3.h"
#include "movie4.h"
#include "movie5.h"
#include "movie6.h"
#include <QStringList>
#include "menu_customer.h"

view::view(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::view)
{
    ui->setupUi(this);
    if(check == false){
        for(int i = 0; i < 6; i++)
            MD.push_back(vec[i].name);
        check = true;
    }
        for(int i = 0; i < 6; i++){
            qDebug() << "howa el loop  " << vec[i].name << endl;
            ui->NameLs->addItem(vec[i].name);
            //MD.push_back(vec[i].name);
            ui->CinemaLs->addItem(vec[i].cinema);
            ui->QuanLs->addItem(vec[i].quantity);
            ui->PriceLs->addItem(vec[i].price);
        }
}

view::~view()
{
    delete ui;
}

void view::on_pushButton_7_clicked()
{
    Page2 p;
   p.setModal(true);
   this->hide();
    p.exec();
}

void view::on_pushButton_8_clicked()
{
    if(_4Customer == false){
        menu a;
        a.setModal(true);
        this->hide();
        a.exec();
    }
    else if(_4Customer == true){
        menu_customer m;
        m.setModal(true);
        this->hide();
        m.exec();
    }
}

void view::on_pushButton_clicked()
{
    Movie1 mov1;
    mov1.setModal(true);
    this->hide();
    mov1.exec();
}

void view::on_pushButton_2_clicked()
{
    movie2 mov2;
    mov2.setModal(true);
    this->hide();
    mov2.exec();
}

void view::on_pushButton_3_clicked()
{
    movie3 mov3;
    mov3.setModal(true);
    this->hide();
    mov3.exec();
}

void view::on_pushButton_4_clicked()
{
    movie4 mov4;
    mov4.setModal(true);
    this->hide();
    mov4.exec();
}

void view::on_pushButton_5_clicked()
{
    movie5 mov5;
    mov5.setModal(true);
    this->hide();
    mov5.exec();
}

void view::on_pushButton_6_clicked()
{
    movie6 mov6;
    mov6.setModal(true);
    this->hide();
    mov6.exec();
}

