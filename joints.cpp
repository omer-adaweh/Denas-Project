#include "joints.h"
#include "ui_joints.h"

#include <QTime>
#include <QTimer>

QTimer* elapsed = new QTimer();
auto track=QTime(00,10,01);

Joints::Joints(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Joints),
     interval(10)
{
    counter=0;
    connect(elapsed, SIGNAL(timeout()), this, SLOT(showTime()));
    ui->setupUi(this);
    QPixmap pix(":/resources/img/Screen Shot 2020-03-27 at 8.20.38 PM.png");
    ui->imagelocation->setPixmap(pix.scaled(300,300,Qt::KeepAspectRatio));

}


void Joints::showTime(){

    track =track.addMSecs(-(elapsed->interval()));
    counter++;
    ui->progressBar->setValue(counter/1200);
    ui->lcdNumber_2->display(counter/1200);
    QString timestr = track.toString("hh:mm:ss");
    ui->lcdNumber->display(timestr);
    if(timestr=="00:00:00"){
        elapsed->stop();
    }
    if((counter/1200)==100){
        elapsed->stop();
        ui->sound->hide();
        ui->time->hide();
        ui->pushButton_2->hide();
        ui->pushButton_3->hide();
        ui->pushButton_4->hide();
        ui->lcdNumber->display("00:00");
        ui->label_6->setText("Battery Dead");
        ui->label_2->setText("Electrodes Deactivated");
    }
    if((counter/1200)==90){
        ui->label_6->setText("Battery Critical");
    }
    if((counter/1200)==80){
        ui->label_6->setText("Battery Low");
    }

}

void Joints::on_pushButton_2_clicked()
{
    elapsed->start(interval);
    ui->label_2->setText("Electrodes Activated");
    QPixmap sound(":/resources/img/speaker-emoji-png-4.png");
    ui->sound->setPixmap(sound.scaled(30,30,Qt::KeepAspectRatio));
    ui->sound->show();
    QPixmap time(":/resources/img/4139971-free-hourglass-icon-png-183187-download-hourglass-icon-png-183187-png-sand-timer-655_980.png");
    ui->time->setPixmap(time.scaled(30,30,Qt::KeepAspectRatio));
    ui->time->show();

}

void Joints::on_pushButton_4_clicked()
{
    elapsed->stop();
    track=QTime(0,10,01);
    ui->label_2->setText("");
    showTime();
    ui->sound->hide();
    ui->time->hide();

}


void Joints::on_pushButton_clicked()
{
    hide();
    elapsed->stop();
    track=QTime(0,10,01);
    ui->label_2->setText("");
    showTime();
    ui->sound->hide();
    ui->time->hide();
}


void Joints::on_pushButton_3_clicked(){

    elapsed->stop();
    ui->sound->hide();
    ui->time->hide();
    ui->label_2->setText("Electrodes Deactivated");

}

Joints::~Joints()
{
    delete ui;
}

