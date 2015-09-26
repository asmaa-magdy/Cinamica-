#include "update.h"
#include "ui_update.h"
#include "global.h"
#include "update_data.h"
#include "qdebug.h"
#include "menu.h"

Update::Update(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Update)
{
    ui->setupUi(this);
     ui->label_3->hide();
}

Update::~Update()
{
    delete ui;
}



void Update::on_pushButton_clicked()
{
    bool founded=false;
    if(ui->lineEdit->text().isEmpty()||ui->lineEdit_2->text().isEmpty())
    {
        ui->label_3->setStyleSheet("font: bold 15px; color:red");
        ui->label_3->setText("Required");
        ui->label_3->show();
    }
    else
    {
        Movie M;
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i].name==ui->lineEdit->text()&&vec[i].cinema==ui->lineEdit_2->text())
            {
               // qDebug<<"NOW HERE"<<endl;
                founded=true;
                search_2.cinema=vec[i].cinema;
                search_2.name=vec[i].name;
                search_2.price=vec[i].price;
                search_2.quantity=vec[i].quantity;
                this->hide();
                u=new Update_Data();
                u->Datadisplay(search_2);
                qDebug()<<i<<" ";
                qDebug()<<M.cinema<<" "<<M.name<<" "<<M.price<<" "<<M.quantity<<endl;
                //updated_number=i;
               return;
            }

        }
        if(!founded)
        {
         //   ui->label_3->hide();
            ui->label_3->setStyleSheet("font: bold 15px; color:red");
            ui->label_3->setText("Not Found");
            ui->label_3->show();
        }

    }
}


void Update::on_pushButton_3_clicked()
{
    menu m;
    m.setModal(true);
    this->hide();
    m.exec();
}
