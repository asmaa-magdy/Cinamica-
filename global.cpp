#include "global.h"
#include <qvector.h>
#include <QFile>
#include <QTextStream>
#include <QDebug>

QVector <Movie> vec;
QVector <Movie> ser;
QVector <Movie_details> det;
QVector <QString> MD;
QString nameD;
bool check = false;
bool check2 = false;
bool check3 = false;
bool check4 = false;
bool check5 = false;
bool check6 = false;
bool _4Customer = false;
Movie search_2;
void load_up() {
   // qDebug() << "it's here" ;
    Movie M;
    Movie_details MM;
    QFile mfile("/home/asmaa/QT/CINAMIKA/data.txt");
    QFile Dfile("/home/asmaa/QT/CINAMIKA/Details.txt");
    if (!mfile.open(QIODevice::ReadWrite)){
           qDebug() << "baaaaaaaaaaaaaayez";
           return;
    }
    if (!Dfile.open(QIODevice::ReadWrite)){
        qDebug() << "bayez ahoooooooooooo";
        return;
    }
    QTextStream in(&mfile);
    QTextStream D(&Dfile);
    while(! in.atEnd()){
       QString mText = in.readLine();
       QStringList L = mText.split("]");
       M.name = L[0];
       M.cinema = L[1];
       M.quantity = L[2];
       M.price = L[3];
       M.name = M.name.remove("[");
       M.cinema = M.cinema.remove(" [");
       M.quantity = M.quantity.remove(" [");
       M.price = M.price.remove(" [");
     //  qDebug() << M.name << " "<< M.cinema <<" "<<M.quantity<<" "<<M.price<<endl;
       vec.push_back(M);
    }
    while(! D.atEnd()){
       QString mText2 = D.readLine();
       QStringList L2 = mText2.split("]");
       MM.type = L2[0];
       MM.detail = L2[1];
       MM.director = L2[2];
       MM.writers = L2[3];
       MM.stars = L2[4];
       MM.movie = L2[5];
       MM.type = MM.type.remove("[");
       MM.detail = MM.detail.remove("[");
       MM.director = MM.director.remove("[");
       MM.writers = MM.writers.remove("[");
       MM.stars = MM.stars.remove("[");
       MM.writers = MM.writers.remove("[");
       MM.movie = MM.movie.remove("[");
     //  qDebug() << M.name << " "<< M.cinema <<" "<<M.quantity<<" "<<M.price<<endl;
       det.push_back(MM);

    }
       mfile.flush();
       mfile.close();
       Dfile.flush();
       Dfile.close();
}
void fromVecToFile() {
   QFile mfile("/home/asmaa/QT/CINAMIKA/data.txt");
      if (!mfile.open(QIODevice::WriteOnly))
           return;
    QTextStream out(&mfile);
   for(int i = 0; i < vec.size(); i++){
      // qDebug() << vec[i].name << " " << vec[i].cinema << " " << vec[i].quantity << " " << vec[i].price << endl;
        out << "[" << vec[i].name << "]" << " [" << vec[i].cinema << "]" << " [" << vec[i].quantity << "]" << " [" << vec[i].price
            << "] ";
        out <<endl;
    }
       mfile.flush();
       mfile.close();

}
