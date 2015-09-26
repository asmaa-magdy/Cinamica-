#include "page_6.h"
#include "ui_page_6.h"

Page_6::Page_6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Page_6)
{
    ui->setupUi(this);
}

Page_6::~Page_6()
{
    delete ui;
}
