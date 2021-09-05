#include "diarrhea.h"
#include "ui_diarrhea.h"

#include <QTime>
#include <QTimer>

QTimer* number = new QTimer();
auto times=QTime(00,10,01);

Diarrhea::Diarrhea(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Diarrhea),
     interval(10)
{
    counter=0;
    connect(number, SIGNAL(timeout()), this, SLOT(showTime()));
    ui->setupUi(this);
    QPixmap pix(":/resources/img/Screen Shot 2020-03-30 at 3.38.16 PM.png");
    ui->imagelocation->setPixmap(pix.scaled(300,300,Qt::KeepAspectRatio));

}


void Diarrhea::showTime(){

    times =times.addMSecs(-(number->interval()));
    counter++;
    ui->progressBar->setValue(counter/1200);
    ui->lcdNumber_2->display(counter/1200);
    QString timestr = times.toString("hh:mm:ss");
    ui->lcdNumber->display(timestr);
    if(timestr=="00:00:00"){
        number->stop();
    }
    if((counter/1200)==100){
        number->stop();
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

void Diarrhea::on_pushButton_2_clicked()
{
    number->start(interval);
    ui->label_2->setText("Electrodes Activated");
    QPixmap sound(":/resources/img/speaker-emoji-png-4.png");
    ui->sound->setPixmap(sound.scaled(30,30,Qt::KeepAspectRatio));
    ui->sound->show();
    QPixmap time(":/resources/img/4139971-free-hourglass-icon-png-183187-download-hourglass-icon-png-183187-png-sand-timer-655_980.png");
    ui->time->setPixmap(time.scaled(30,30,Qt::KeepAspectRatio));
    ui->time->show();

}

void Diarrhea::on_pushButton_4_clicked()
{
    number->stop();
    times=QTime(0,10,01);
    ui->label_2->setText("");
    showTime();
    ui->sound->hide();
    ui->time->hide();

}


void Diarrhea::on_pushButton_clicked()
{
    hide();
    number->stop();
    times=QTime(0,10,01);
    ui->label_2->setText("");
    showTime();
    ui->sound->hide();
    ui->time->hide();
}


void Diarrhea::on_pushButton_3_clicked(){

    number->stop();
    ui->sound->hide();
    ui->time->hide();
    ui->label_2->setText("Electrodes Deactivated");

}

Diarrhea::~Diarrhea()
{
    delete ui;
}

