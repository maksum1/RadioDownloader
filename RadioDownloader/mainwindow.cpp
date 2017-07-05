#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "radio.h"
#include <iostream>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptr_Radio=new Radio(QUrl("http://online-hitfm.tavrmedia.ua/HitFM"));
    //ptr_Radio=new Radio(QUrl("http://178.136.237.243:8000/galychyna"));
}

MainWindow::~MainWindow()
{
    delete ptr_Radio;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ptr_Radio->start();
}

void MainWindow::on_pushButton_2_clicked()
{
    ptr_Radio->stop();
}



void MainWindow::on_verticalSlider_actionTriggered(int action)
{
    int temp=ui->verticalSlider->value();
    ptr_Radio->set_voice(temp);
}
