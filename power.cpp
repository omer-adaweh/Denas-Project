#include "power.h"
#include "ui_power.h"

Power::Power(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Power)
{
    ui->setupUi(this);
}

Power::~Power()
{
    delete ui;
}

void Power::on_pushButton_clicked()
{
    hide();
    dystonia= new Dysonia(this);
    dystonia->show();

}


void Power::on_horizontalSlider_sliderPressed()
{
    ui->label_2->setText("");
}
