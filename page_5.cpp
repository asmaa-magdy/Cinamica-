#include "page_5.h"
#include "ui_page_5.h"
#include "page4.h"
#include "page_6.h"

Page_5::Page_5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Page_5)
{
    ui->setupUi(this);
}

Page_5::~Page_5()
{
    delete ui;
}

void Page_5::on_pushButton_8_clicked()
{
    Page4 p;
    p.setModal(true);
    this->hide();
    p.exec();
}

void Page_5::on_pushButton_7_clicked()
{
    Page_6 p;
    p.setModal(true);
    this->hide();
    p.exec();
}
