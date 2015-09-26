#include "password.h"
#include "ui_password.h"
#include <QString>
#include <QLabel>
#include "authorization.h"
#include "menu.h"

password::password(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::password)
{
    ui->setupUi(this);
    ui->label->hide();
}

password::~password()
{
    delete ui;
}

void password::on_pushButton_2_clicked()
{
    QString userpassword;
    userpassword = ui->lineEdit->text();

    if(userpassword!="cinema")
    {
        ui->label->show();
    }
    else
    {
        ui->label->hide();
        menu mennu;
        mennu.setModal(true);
        this->hide();
        mennu.exec();
    }
}

void password::on_pushButton_clicked()
{
    authorization au;
    au.setModal(true);
    au.exec();
    this->hide();

}
