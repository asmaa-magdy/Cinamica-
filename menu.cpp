#include "menu.h"
#include "ui_menu.h"
#include "view.h"
#include "goodbye.h"
#include "newadding.h"
#include "searchfn.h"
#include "deletemovie.h"
#include "update.h"
#include <QDebug>

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    qDebug() << "gowa el menu aho, omal fe eh >:(";
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_pushButton_clicked()
{
    view v;
    v.setModal(true);
    this->hide();
    v.exec();
}

void menu::on_pushButton_6_clicked()
{
    GOODBYE k;
    k.setModal(true);
    this->hide();
    k.exec();
}

void menu::on_pushButton_2_clicked()
{
    NewAdding a;
    a.setModal(true);
    this->hide();
    a.exec();
}

void menu::on_pushButton_5_clicked()
{
    SearchFn s;
    s.setModal(true);
    this->hide();
    s.exec();
}

void menu::on_pushButton_3_clicked()
{
    DeleteMovie D;
    D.setModal(true);
    this->hide();
    D.exec();
}

void menu::on_pushButton_4_clicked()
{
    Update it;
    this->hide();
    it.setModal(true);
    it.exec();

}
