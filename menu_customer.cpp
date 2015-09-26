#include "menu_customer.h"
#include "ui_menu_customer.h"
#include "viewcust.h"
#include "anotherbye.h"
#include "global.h"
#include "view.h"
#include "searchfn.h"
menu_customer::menu_customer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu_customer)
{
    ui->setupUi(this);
    _4Customer = true;
}

menu_customer::~menu_customer()
{
    delete ui;
}

void menu_customer::on_pushButton_clicked()
{
   view v;
   v.setModal(true);
   this->hide();
   v.exec();
}


void menu_customer::on_pushButton_3_clicked()
{
    AnotherBye k;
    k.setModal(true);
    this->hide();
    k.exec();
}

void menu_customer::on_pushButton_2_clicked()
{
    SearchFn s;
    s.setModal(true);
    this->hide();
    s.exec();
}
