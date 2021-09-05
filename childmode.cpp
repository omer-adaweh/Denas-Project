#include "childmode.h"
#include "ui_childmode.h"
#include "QSettings"


childmode::childmode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::childmode)
{
    ui->setupUi(this);
}

childmode::~childmode()
{
    delete ui;
}

void childmode::on_pushButton_clicked()
{
    close();
}

void childmode::on_radioButton_clicked()
{
    QSettings settings("carletonU", "comp3004");
    settings.beginGroup("child");
    settings.setValue("childmode", "0 to 1 years");
    settings.endGroup();

}

void childmode::on_radioButton_2_clicked()
{

    QSettings settings("carletonU", "comp3004");
    settings.beginGroup("child");
    settings.setValue("childmode", "1 to 3 years");
    settings.endGroup();


}

void childmode::on_radioButton_3_clicked()
{
    QSettings settings("carletonU", "comp3004");
    settings.beginGroup("child");
    settings.setValue("childmode", "4 to 7 years");
    settings.endGroup();
}


void childmode::on_radioButton_4_clicked()
{
    QSettings settings("carletonU", "comp3004");
    settings.beginGroup("child");
    settings.setValue("childmode", "8 to 12 years");
    settings.endGroup();
}

void childmode::on_radioButton_5_clicked()
{
    QSettings settings("carletonU", "comp3004");
        settings.beginGroup("child");
        settings.setValue("childmode", "OFF");
        settings.endGroup();
}
