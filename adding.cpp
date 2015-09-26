#include "adding.h"
#include "ui_adding.h"
#include <QString>
#include <QFile>
#include <QTextStream>
//#include <iostream>
//using namespace std;
#include "successfuladding.h"
#include "general.h"

Adding::Adding(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Adding)
{
    ui->setupUi(this);
}

Adding::~Adding()
{
    delete ui;
}

void Adding::on_pushButton_clicked()
{
    General G;
    QFile mfile("/home/asmaa/QT/CINAMIKA/data.txt");
    if (!mfile.open(QIODevice::ReadWrite| QIODevice::Append))
           return;
    QTextStream out(&mfile);
    QString Name, Cinema, Quantity, Price;
    Name = ui->lineEdit->text();
    Cinema = ui->lineEdit_2->text();
    Quantity = ui->lineEdit_3->text();
    Price = ui->lineEdit_4->text();
    out << "[" << Name << "] " << "[" << Cinema << "] " << "[" << Quantity << "] " << "[" << Price << "]";
    out << endl;
    SuccessfulAdding s;
    s.setModal(true);
    this->hide();
    s.exec();
}
