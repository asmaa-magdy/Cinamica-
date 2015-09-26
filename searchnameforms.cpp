#include "searchnameforms.h"
#include "ui_searchnameforms.h"
#include "menu.h"
#include "namesearch.h"
#include <QFile>
#include <QTextStream>
#include <QString>
#include "global.h"

SearchNameForms::SearchNameForms(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchNameForms)
{
    //Namesearch->ui->lineEdit;
    ui->setupUi(this);
    for(int i = 0; i < ser.size(); i++){
        ui->NameLs->addItem(ser[i].name);
        ui->CinemaLs->addItem(ser[i].cinema);
        ui->QuanLs->addItem(ser[i].quantity);
        ui->PriceLs->addItem(ser[i].price);
    }
//    QFile mfile("/home/asmaa/QT/CINAMIKA/data.txt");
//    if (!mfile.open(QIODevice::ReadOnly | QIODevice::Text))
//           return;
//  //  int counter = 0;
//    QTextStream in(&mfile);
//    for(int i = 0; i < 26; i++){
//      //  if()
//        QString mText = in.readLine();
//        QString name, cinema, Q, P;
//       QStringList L = mText.split("]");
//       name = L[0];
//       cinema = L[1];
//       Q = L[2];
//       P = L[3];
//       name = name.remove('[');
//       cinema = cinema.remove('[');
//       Q = Q.remove('[');
//       P = P.remove('[');

//       ui->NameLs->addItem(name);
//       ui->CinemaLs->addItem(cinema);
//       ui->QuanLs->addItem(Q);
//       ui->PriceLs->addItem(P);
//    }
//       mfile.flush();
//       mfile.close();
}

SearchNameForms::~SearchNameForms()
{
    delete ui;
}

void SearchNameForms::on_pushButton_clicked()
{
    ser.clear();
    menu m;
    m.setModal(true);
    this->hide();
    m.exec();
}
