#include "namesearch.h"
#include "ui_namesearch.h"
#include <QFile>
#include <QTextStream>
#include "searchnameforms.h"
#include <QString>
#include "global.h"
#include "menu.h"
#include "menu_customer.h"

NameSearch::NameSearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NameSearch)
{
    ui->setupUi(this);
    ui->label_3->hide();
    ui->label_4->hide();
}

NameSearch::~NameSearch()
{
    delete ui;
}

void NameSearch::on_pushButton_clicked()
{
    bool Key=false;
    QString search = ui->lineEdit->text();
    for(int i = 0; i < vec.size(); i++){
        if(search == vec[i].name){
           ser.push_back(vec[i]);
           Key=true;
        }
    }
    if(ui->lineEdit->text().isEmpty()){
        ui->label_3->show();
        ui->label_4->hide();
    }

    else if(Key==true){
    SearchNameForms s;
    s.setModal(true);
    this->hide();
    s.exec();
    }
    else {
        ui->label_3->hide();
        ui->label_4->show();
    }
}

void NameSearch::on_pushButton_3_clicked()
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
