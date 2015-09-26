#include "page3cust.h"
#include "ui_page3cust.h"
#include "page4cust.h"
#include "page2cust.h"
#include <QFile>
#include <QTextStream>
#include "global.h"

Page3Cust::Page3Cust(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Page3Cust)
{
    ui->setupUi(this);
//    QFile mfile("/home/asmaa/QT/CINAMIKA/data.txt");
//    if (!mfile.open(QIODevice::ReadOnly | QIODevice::Text))
//           return;
//    QTextStream in(&mfile);
//    for(int i = 0; i < 18; i++){
//        QString mText = in.readLine();
//        QString name, cinema, Q, P;
//        if(i >= 12){
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
    for(int i = 12; i < 18; i++){
        ui->NameLs->addItem(vec[i].name);
        ui->CinemaLs->addItem(vec[i].cinema);
        ui->QuanLs->addItem(vec[i].quantity);
        ui->PriceLs->addItem(vec[i].price);
    }

}

Page3Cust::~Page3Cust()
{
    delete ui;
}

void Page3Cust::on_pushButton_7_clicked()
{
    Page4Cust p;
    p.setModal(true);
    this->hide();
    p.exec();
}

void Page3Cust::on_pushButton_8_clicked()
{
    Page2Cust p;
    p.setModal(true);
    this->hide();
    p.exec();
}
