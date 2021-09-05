#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTime>

#include <QDate>

#include <QTimer>

#include <QDebug>
#include<QElapsedTimer>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    program= new Program(this);
    program->show();

}

void MainWindow::on_pushButton_6_clicked()
{
    help= new class help(this);
    help->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    tutorial = new class tutorial(this);
    tutorial->show();


}

void MainWindow::on_pushButton_4_clicked()
{
    childmode = new class childmode(this);
    childmode->show();
}

void MainWindow::on_pushButton_5_clicked()
{
    settings = new class settings(this);
    settings->show();

}

void MainWindow::on_pushButton_3_clicked()
{
    frequency = new class frequency(this);
    frequency->show();
}


void MainWindow::on_About_clicked()
{
    about= new class about(this);
    about->show();

}
