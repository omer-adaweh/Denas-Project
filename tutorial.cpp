#include "tutorial.h"
#include "ui_tutorial.h"

tutorial::tutorial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tutorial)
{
    ui->setupUi(this);
}

tutorial::~tutorial()
{
    delete ui;
}

void tutorial::on_pushButton_clicked()
{
    hide();
     tutorial_2 = new class tutorial_2(this);
     tutorial_2->show();

}
