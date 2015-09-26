#include "deletemovie.h"
#include "ui_deletemovie.h"
#include "global.h"
#include <QDebug>
#include "menu.h"

DeleteMovie::DeleteMovie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteMovie)
{
    ui->setupUi(this);
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
}

DeleteMovie::~DeleteMovie()
{
    delete ui;
}

void DeleteMovie::on_pushButton_clicked()
{
    bool Key=false;
    QString search = ui->lineEdit->text();
    QString s2 = ui->lineEdit_2->text();
    for(int i = 0; i < vec.size(); i++){
        if(! ui->lineEdit->text().isEmpty() && ! ui->lineEdit_2->text().isEmpty()) {
            if(search == vec[i].name && s2 == vec[i].cinema){
                Key = true;
                 vec.erase(vec.begin()+i, vec.begin()+i+1);
                 if(i!=0)
                 i--;
            } }
            else{
                if(search == vec[i].name){
                    qDebug() << "henaaaaaaaaaaaa"<< endl;
                    Key = true;
                    vec.erase(vec.begin()+i,vec.begin()+i+1);
                    if(i!=0)
                    i--;
                }
            }
        qDebug()<<vec[i].name <<" "<<i<<vec.size()<<endl;
    }
    if((ui->lineEdit->text().isEmpty() && ui->lineEdit_2->text().isEmpty()) || ui->lineEdit->text().isEmpty()){
        ui->label_5->hide();
        ui->label_6->hide();
        ui->label_4->setStyleSheet("color:red;");
        ui->label_4->show();

    }
    else if(Key == false){
        ui->label_4->hide();
        ui->label_6->hide();
        ui->label_5->setStyleSheet("color:red;");
        ui->label_5->show();

    }
    else {
        if(vec[0].name==search)
        {
            vec.erase(vec.begin(), vec.begin()+1);
        }
        ui->pushButton->hide();
        ui->label_6->setStyleSheet("color:red;");
        ui->label_6->show();
        ui->label_5->hide();
        ui->label_4->hide();
    }
}

void DeleteMovie::on_pushButton_2_clicked()
{
   fromVecToFile();
   menu m;
   m.setModal(true);
   this->hide();
   m.exec();
}
