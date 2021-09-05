#include "powertwo.h"
#include "ui_powertwo.h"

powertwo::powertwo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::powertwo)
{
    ui->setupUi(this);
}

powertwo::~powertwo()
{
    delete ui;
}
void powertwo::on_pushButton_clicked()
{
    hide();
    joints= new Joints(this);
    joints->show();

}


void powertwo::on_horizontalSlider_sliderPressed()
{
    ui->label_2->setText("");
}


