#include "page2cust.h"
#include "ui_page2cust.h"
#include "page3cust.h"
#include "viewcust.h"
#include <QFile>
#include <QTextStream>
#include "global.h"

Page2Cust::Page2Cust(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Page2Cust)
{
    ui->setupUi(this);

//    QFile mfile("/home/asmaa/QT/CINAMIKA/data.txt");
//    if (!mfile.open(QIODevice::ReadOnly | QIODevice::Text))
//           return;
//    QeTxtStream in(&mfile);
//    for(int i = 0; i < 12; i++){
//        QString mText = in.readLine();
//        QString name, cinema, Q, P;
//        if(i >= 6){
//       QStringList L = mText.split("]");
//       name = L[0];
//       cinema = L[1];
//       Q = L[2];
//       P = L[3];
//       name = name.remove('[');
//       ui->NameLs->addItem(name);
//       cinema = cinema.remove('[');
//       ui->CinemaLs->addItem(cinema);
//       Q = Q.remove('[');
//       ui->QuanLs->addItem(Q);
//       P = P.remove('[');
//       ui->PriceLs->addItem(P);
//        }
//    }
//       mfile.flush();
//       mfile.close();
    for(int i = 6; i < 12; i++){
        ui->NameLs->addItem(vec[i].name);
        ui->CinemaLs->addItem(vec[i].cinema);
        ui->QuanLs->addItem(vec[i].quantity);
        ui->PriceLs->addItem(vec[i].price);
    }

}

Page2Cust::~Page2Cust()
{
    delete ui;
}

void Page2Cust::on_pushButton_7_clicked()
{
    Page3Cust p;
    p.setModal(true);
    this->hide();
    p.exec();
}

void Page2Cust::on_pushButton_8_clicked()
{
    viewCust v;
    v.setModal(true);
    this->hide();
    v.exec();
}
