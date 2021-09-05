#include "powerfour.h"
#include "ui_powerfour.h"

powerfour::powerfour(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::powerfour)
{
    ui->setupUi(this);
}

powerfour::~powerfour()
{
    delete ui;
}

void powerfour::on_pushButton_clicked()
{
    hide();
    hypotonia= new Hypotonia(this);
    hypotonia->show();

}


void powerfour::on_horizontalSlider_sliderPressed()
{
    ui->label_2->setText("");
}
