#include "searchfn.h"
#include "ui_searchfn.h"
#include "namesearch.h"
#include "cinemasearch.h"
#include "global.h"
#include "menu.h"
#include "menu_customer.h"

SearchFn::SearchFn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchFn)
{
    ui->setupUi(this);
}

SearchFn::~SearchFn()
{
    delete ui;
}

void SearchFn::on_pushButton_clicked()
{
    NameSearch n;
    n.setModal(true);
    this->hide();
    n.exec();
}

void SearchFn::on_pushButton_2_clicked()
{
    CinemaSearch c;
    c.setModal(true);
    this->hide();
    c.exec();
}

void SearchFn::on_pushButton_3_clicked()
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
