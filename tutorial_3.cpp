#include "tutorial_3.h"
#include "ui_tutorial_3.h"

tutorial_3::tutorial_3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tutorial_3)
{
    ui->setupUi(this);
}

tutorial_3::~tutorial_3()
{
    delete ui;
}

void tutorial_3::on_pushButton_clicked()
{
    hide();
}
