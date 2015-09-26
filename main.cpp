#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QString>
#include "global.h"
#include <QDebug>
#include <QSplashScreen>
#include <QTimer>
//QString str = "Peter Pan";
//str.contains("peter", Qt::CaseInsensitive);    // returns true
//======================================================================================
//QString x = "sticky question";
//QString y = "sti";
//x.indexOf(y);               // returns 0
//x.indexOf(y, 1);            // returns 10
//x.indexOf(y, 10);           // returns 10
//x.indexOf(y, 11);           // returns -1
//=======================================================================================
int main(int argc, char *argv[])
{
    load_up();
    qDebug() << vec.size();
   // qDebug() << endl << det.size();
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    QFile inputFile("data.txt");
    if (inputFile.open(QIODevice::ReadOnly))
    {
       QTextStream in(&inputFile);
       while (!in.atEnd())
       {
          QString line = in.readLine();
       }
       inputFile.close();
    }



    return a.exec();
}
