#include "powerthree.h"
#include "ui_powerthree.h"

powerthree::powerthree(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::powerthree)
{
    ui->setupUi(this);
}

powerthree::~powerthree()
{
    delete ui;
}

void powerthree::on_pushButton_clicked()
{
    hide();
    diarrhea= new Diarrhea(this);
    diarrhea->show();

}


void powerthree::on_horizontalSlider_sliderPressed()
{
    ui->label_2->setText("");
}


