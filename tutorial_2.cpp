#include "tutorial_2.h"
#include "ui_tutorial_2.h"

tutorial_2::tutorial_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tutorial_2)
{
    ui->setupUi(this);
}

tutorial_2::~tutorial_2()
{
    delete ui;
}

void tutorial_2::on_pushButton_clicked()
{
    hide();
    tutorial_3 = new class tutorial_3(this);
    tutorial_3->show();

}
