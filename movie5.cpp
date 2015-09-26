#include "movie5.h"
#include "ui_movie5.h"
#include "menu.h"
#include "global.h"
#include <QPixmap>
#include "view.h"

movie5::movie5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::movie5)
{
    ui->setupUi(this);
    ui->MovieName->setStyleSheet("font: bold 30px; color:blue;");
    ui->Director->setStyleSheet("font: bold 14px;");
    ui->Category->setStyleSheet("font: bold 15px; color:blue");
    ui->stars->setStyleSheet("font: bold 14px;");
    ui->Writer->setStyleSheet("font: bold 14px;");
    for(int i = 0; i < det.size(); i++){
        if(det[i].movie == MD[4]){
            ui->MovieName->setText(det[i].movie);
            ui->Category->setText(det[i].type);
            ui->textEdit->setText(det[i].detail);
            ui->Writer->setText(det[i].writers);
            ui->Director->setText(det[i].director);
            ui->stars->setText(det[i].stars);
        }
    }
    if(MD[4] == "Marvel's The Avengers"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/Marvels-The-Avengers.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[4] == "The Last Exorcism"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/The_Last_Exorcism_Poster.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[4] == "Get the Gringo"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/Get-the-Gringo_dvd_cover.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[4] == "The Lucky One"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/the-lucky-one-movie-poster-nicholas-sparks-novels-and-movies-26608347-268-398.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[4] == "Sammy's Adventures: The Secret Passage"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/25773.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[4] == "Titanic (in 3D)"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/er.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[4] == "StreetDance 3D"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/SD.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[4] == "Twilight Saga: Breaking Dawn Part 1"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/TW.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[4] == "Gone"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/gone.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[4] == "Mission: Impossible Ghost Protocol"){
         QPixmap pix("/home/asmaa/QT/CINAMIKA/GT.jpg");
         ui->pictureLabel->setPixmap(pix);
         ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[4] == "This Means War"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/mw.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[4] == "Journey 2: The Mysterious Island"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/JI.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[4] == "The Lorax"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/lorax.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[4] == "21 Jump Street"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/JS.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[4] == "Omar and Salma 3"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/Omar.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }
    else if(MD[4] == "X Large"){
        QPixmap pix("/home/asmaa/QT/CINAMIKA/large.jpg");
        ui->pictureLabel->setPixmap(pix);
        ui->pictureLabel->setScaledContents(true);
    }

}

movie5::~movie5()
{
    delete ui;
}

void movie5::on_pushButton_2_clicked()
{
    view m;
    m.setModal(true);
    this->hide();
    m.exec();
}
