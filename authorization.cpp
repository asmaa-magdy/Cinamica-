#include "authorization.h"
#include "ui_authorization.h"
#include "password.h"
#include "menu_customer.h"
#include "global.h"
#include "goodbye.h"
authorization::authorization(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::authorization)
{
    ui->setupUi(this);
}

authorization::~authorization()
{
    delete ui;
}

void authorization::on_pushButton_clicked()
{
    password pass;
    pass.setModal(true);
    this->hide();
    pass.exec();
}

void authorization::on_pushButton_2_clicked()
{
    menu_customer menu;
    menu.setModal(true);
    menu.exec();
    this->hide();
}

void authorization::on_pushButton_3_clicked()
{
    GOODBYE g;
    g.setModal(true);
    this->hide();
    g.exec();
}
