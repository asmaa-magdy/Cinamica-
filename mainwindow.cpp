#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "authorization.h"
//#include "global.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    authorization au;
    au.setModal(true);
    this->hide();
    au.exec();

}

