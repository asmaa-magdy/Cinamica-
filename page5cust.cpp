#include "page5cust.h"
#include "ui_page5cust.h"
#include "page4cust.h"
#include "page6cust.h"
#include <QFile>
#include <QTextStream>
#include "global.h"

Page5Cust::Page5Cust(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Page5Cust)
{
    ui->setupUi(this);
//    QFile mfile("/home/asmaa/QT/CINAMIKA/data.txt");
//    if (!mfile.open(QIODevice::ReadOnly | QIODevice::Text))
//           return;
//    QTextStream in(&mfile);
//    for(int i = 0; i < 26; i++){
//        QString mText = in.readLine();
//        QString name, cinema, Q, P;
//        if(i >= 24){
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
    for(int i = 24; i < vec.size(); i++){
        if(vec.size() > 30)
            break;
        ui->NameLs->addItem(vec[i].name);
        ui->CinemaLs->addItem(vec[i].cinema);
        ui->QuanLs->addItem(vec[i].quantity);
        ui->PriceLs->addItem(vec[i].price);
    }
}

Page5Cust::~Page5Cust()
{
    delete ui;
}

void Page5Cust::on_pushButton_7_clicked()
{
    Page6Cust p;
    p.setModal(true);
    this->hide();
    p.exec();
}

void Page5Cust::on_pushButton_8_clicked()
{
    Page4Cust p;
    p.setModal(true);
    this->hide();
    p.exec();
}
