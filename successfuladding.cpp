#include "successfuladding.h"
#include "ui_successfuladding.h"
#include "menu.h"

SuccessfulAdding::SuccessfulAdding(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SuccessfulAdding)
{
    ui->setupUi(this);
}

SuccessfulAdding::~SuccessfulAdding()
{
    delete ui;
}

void SuccessfulAdding::on_pushButton_clicked()
{
    menu m;
    m.setModal(true);
    this->hide();
    m.exec();
}
