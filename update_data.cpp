#include "qdebug.h"
#include "update_data.h"
#include "ui_update_data.h"
#include "qdebug.h"
#include "menu.h"
#include "global.h"

Movie nl3b;
int updated_number;

Update_Data::Update_Data(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Update_Data)
{
    ui->setupUi(this);
    ui->label_5->hide();
}

void Update_Data::Datadisplay(Movie M)
{

    ui->lineEdit->setText(M.name);
    ui->lineEdit_2->setText(M.cinema);
    ui->lineEdit_3->setText(M.price);
    ui->lineEdit_4->setText(M.quantity);
    ui->lineEdit->displayText();
    ui->lineEdit_2->displayText();
    ui->lineEdit_3->displayText();
    ui->lineEdit_4->displayText();
    this->exec();
    /*
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i].name==M.name)
        {
            updated_number=i;
            qDebug()<<"updated_number: "<<updated_number<<" "<<i<<endl;
            break;
        }
      }


       // updated_number=i;
        nl3b.name=M.name;
        nl3b.cinema=M.cinema;
        nl3b.price=M.price;
        nl3b.quantity=M.quantity;
        //on_pushButton_clicked_MM(i,M);
        */

    }


Update_Data::~Update_Data()
{
    delete ui;
}

void Update_Data::on_pushButton_clicked()
{
    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i].name==search_2.name)
        {
            updated_number=i;
            qDebug()<<"updated_number: "<<updated_number<<" "<<i<<endl;
            break;
        }
      }
    vec[updated_number].name=ui->lineEdit->text();
    vec[updated_number].cinema=ui->lineEdit_2->text();
    vec[updated_number].quantity=ui->lineEdit_3->text();
    vec[updated_number].price=ui->lineEdit_4->text();
   // on_pushButton_clicked_MM(updated_number,nl3b);
    ui->label_5->setStyleSheet("font: bold 20px; color:green");
    ui->label_5->setText("Successfully Updated ;)");
    ui->label_5->show();

}

void Update_Data::on_pushButton_clicked_MM(int i,Movie m)
{
    if(ui->lineEdit->text().isEmpty()||ui->lineEdit->text().isEmpty()||ui->lineEdit_3->text().isEmpty()||ui->lineEdit_4->text().isEmpty())
    {
        ui->label_5->setStyleSheet("font: bold 15px; color:red");
        ui->label_5->setText("ERROR");
        ui->label_5->show();
    }
    else{
    qDebug()<<"I am here"<<i<<endl;
    vec[i].name=ui->lineEdit->text();
    vec[i].cinema=ui->lineEdit_2->text();
    vec[i].price=ui->lineEdit_3->text();
    vec[i].quantity=ui->lineEdit_4->text();
    }

}


void Update_Data::on_pushButton_3_clicked()
{
    menu l;
    l.setModal(true);
    this->hide();
    l.exec();
}
