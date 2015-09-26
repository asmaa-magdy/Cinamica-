#include "newadding.h"
#include "ui_newadding.h"
#include "successfuladding.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include "global.h"
#include <QVector>
#include <QDebug>

NewAdding::NewAdding(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewAdding)
{
    ui->setupUi(this);
    ui->label_6->setStyleSheet("color:red;");
    ui->label_6->hide();
}

NewAdding::~NewAdding()
{
    delete ui;
}

void NewAdding::on_pushButton_clicked()
{
    bool check = true;
    QFile mfile("/home/asmaa/QT/CINAMIKA/data.txt");
    if (!mfile.open(QIODevice::ReadWrite| QIODevice::Append))
           return;
    QTextStream out(&mfile);
    Movie M;
    M.name = ui->lineEdit->text();
    M.cinema = ui->lineEdit_2->text();
    M.quantity = ui->lineEdit_3->text();
    M.price = ui->lineEdit_4->text();
    if(ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty()
     || ui->lineEdit_3->text().isEmpty() || ui->lineEdit_4->text().isEmpty()){
        ui->label_6->show();
        check = false;
    }
    if(check == true){
        vec.push_back(M);
        qDebug() << "vector " << vec.size();
        SuccessfulAdding s;
        s.setModal(true);
        this->hide();
        s.exec();
    }
}
