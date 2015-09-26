#include "anotherbye.h"
#include "ui_anotherbye.h"
#include "global.h"

AnotherBye::AnotherBye(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AnotherBye)
{
    ui->setupUi(this);
    fromVecToFile();
}

AnotherBye::~AnotherBye()
{
    delete ui;
}

void AnotherBye::on_pushButton_clicked()
{
    this->hide();
}
