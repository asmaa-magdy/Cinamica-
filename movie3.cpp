#include "movie3.h"
#include "ui_movie3.h"
#include <QPixmap>
#include <global.h>
#include "menu.h"
#include "view.h"
movie3::movie3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::movie3)
{
    ui->setupUi(this);
    ui->MovieName->setStyleSheet("font: bold 30px; color:blue;");
    ui->Director->setStyleSheet("font: bold 14px;");
    ui->Category->setStyleSheet("font: bold 15px; color:blue");
    ui->stars->setStyleSheet("font: bold 14px;");
    ui->Writer->setStyleSheet("font: bold 14px;");
    for(int i = 0; i < det.size(); i++){
        if(det[i].movie == MD[2]){
            ui->MovieName->setText(det[i].movie);
            ui->Category->setText(det[i].type);
            ui->textEdit->setText(det[i].detail);
            ui->Writer->setText(det[i].writers);
            ui->Director->setText(det[i].director);
            ui->stars->setText(det[i].stars);
        }
    }
    if(MD[2] == "Marvel's The Avengers"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/Marvels-The-Avengers.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[2] == "The Last Exorcism"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/The_Last_Exorcism_Poster.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[2] == "Get the Gringo"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/Get-the-Gringo_dvd_cover.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[2] == "The Lucky One"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/the-lucky-one-movie-poster-nicholas-sparks-novels-and-movies-26608347-268-398.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[2] == "Sammy's Adventures: The Secret Passage"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/25773.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[2] == "Titanic (in 3D)"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/er.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[2] == "StreetDance 3D"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/SD.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[2] == "Twilight Saga: Breaking Dawn Part 1"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/TW.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[2] == "Gone"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/gone.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[2] == "Mission: Impossible Ghost Protocol"){
         QPixmap pix("/home/asmaa/QT/CINAMIKA/GT.jpg");
         ui->pictureLabel->setPixmap(pix);
         ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[2] == "This Means War"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/mw.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[2] == "Journey 2: The Mysterious Island"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/JI.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[2] == "The Lorax"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/lorax.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[2] == "21 Jump Street"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/JS.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[2] == "Omar and Salma 3"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/Omar.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[2] == "X Large"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/large.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }

//    ui->setupUi(this);
//    ui->MovieName->setStyleSheet("font: bold 30px; color:blue;");
//    ui->Director->setStyleSheet("font: bold 14px;");
//    ui->Category->setStyleSheet("font: bold 15px; color:blue");
//    ui->stars->setStyleSheet("font: bold 14px;");
//    ui->Writer->setStyleSheet("font: bold 14px;");
//    ui->MovieName->setText(det[2].movie);
//    ui->Category->setText(det[2].type);
//    ui->textEdit->setText(det[2].detail);
//    ui->Writer->setText(det[2].writers);
//    ui->Director->setText(det[2].director);
//    ui->stars->setText(det[2].stars);
//    QPixmap pix("/home/asmaa/QT/CINAMIKA/Get-the-Gringo_dvd_cover.jpg");
//    ui->pictureLabel->setPixmap(pix);
//    ui->pictureLabel->setScaledContents(true);
}

movie3::~movie3()
{
    delete ui;
}

void movie3::on_pushButton_2_clicked()
{
    view m;
    m.setModal(true);
    this->hide();
    m.exec();
}
