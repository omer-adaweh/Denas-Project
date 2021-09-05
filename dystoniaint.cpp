#include "dystoniaint.h"
#include "ui_dystoniaint.h"
#include <QPixmap>


DystoniaInt::DystoniaInt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DystoniaInt)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/Screen Shot 2020-03-27 at 5.38.43 PM.png");
    ui->imagelocation->setPixmap(pix);
    QPixmap sound(":/resources/img/speaker-emoji-png-4.png");
    ui->sound->setPixmap(sound.scaled(30,30,Qt::KeepAspectRatio));
    QPixmap time(":/resources/img/4139971-free-hourglass-icon-png-183187-download-hourglass-icon-png-183187-png-sand-timer-655_980.png");
    ui->time->setPixmap(time.scaled(30,30,Qt::KeepAspectRatio));

}

DystoniaInt::~DystoniaInt()
{
    delete ui;
}

void DystoniaInt::on_pushButton_clicked()
{
    hide();

}
