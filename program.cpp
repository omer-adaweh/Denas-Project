#include "program.h"
#include "ui_program.h"

Program::Program(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Program)
{
    ui->setupUi(this);

}

Program::~Program()
{
    delete ui;
}

void Program::on_pushButton_6_clicked()
{
    hide();
    power= new Power(this);
    power->show();
}


void Program::on_pushButton_8_clicked()
{
    hide();
    powertwo= new class powertwo(this);
    powertwo->show();
}

void Program::on_pushButton_23_clicked()
{
    hide();
    powerthree= new class powerthree(this);
    powerthree->show();
}

void Program::on_pushButton_9_clicked()
{
    hide();
    powerfour= new class powerfour(this);
    powerfour->show();

}
