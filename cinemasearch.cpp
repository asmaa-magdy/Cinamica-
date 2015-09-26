#include "cinemasearch.h"
#include "ui_cinemasearch.h"
#include "global.h"
#include "searchnameforms.h"
#include "menu.h"
#include "menu_customer.h"

CinemaSearch::CinemaSearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CinemaSearch)
{
    ui->setupUi(this);
    ui->label_4->hide();
    ui->label_5->hide();
}

CinemaSearch::~CinemaSearch()
{
    delete ui;
}

void CinemaSearch::on_pushButton_clicked()
{
    bool Key=false;
    QString search = ui->lineEdit->text();
    QString s2 = ui->lineEdit_2->text();
    for(int i = 0; i < vec.size(); i++){
        if(search == vec[i].name && s2 == vec[i].cinema){
           ser.push_back(vec[i]);
           Key=true;
        }
    }
    if(ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty()){
        ui->label_4->show();
        ui->label_5->hide();
    }

    else if(Key==true){
    SearchNameForms s;
    s.setModal(true);
    this->hide();
    s.exec();
    }
    else {
        ui->label_4->hide();
        ui->label_5->show();
    }
}

void CinemaSearch::on_pushButton_3_clicked()
{
    if(_4Customer == false){
        menu m;
        m.setModal(true);
        this->hide();
        m.exec();
    }
    else{
        menu_customer k;
        k.setModal(true);
        this->hide();
        k.exec();
    }
}
