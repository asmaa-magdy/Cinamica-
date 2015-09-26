#ifndef GLOBAL_H
#define GLOBAL_H
#include <QVector>
#include<QString>
struct Movie {
    QString name;
    QString cinema;
    QString price;
    QString quantity;
};
struct Movie_details {
    QString type;
    QString detail;
    QString director;
    QString writers;
    QString stars;
    QString movie;
};
extern QVector<Movie> vec;
extern QVector<Movie> ser;
extern void load_up();
extern void fromVecToFile();
extern QVector<Movie_details> det;
extern QVector<QString> MD;
extern QString nameD;
extern Movie search_2;
extern bool check;
extern bool check2;
extern bool check3;
extern bool check4;
extern bool check5;
extern bool check6;
extern bool _4Customer;
#endif // GLOBAL_H
