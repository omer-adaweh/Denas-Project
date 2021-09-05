#include "frequency.h"
#include "ui_frequency.h"
#include "QSettings"


frequency::frequency(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frequency)
{
    ui->setupUi(this);
}

frequency::~frequency()
{
    delete ui;
}
void frequency::on_radioButton_clicked()
{
    QSettings settings("carletonU", "comp3004");
    settings.beginGroup("freq");
    settings.setValue("frequency", "1.0 to 9.9 Hz");
    settings.endGroup();
}

void frequency::on_radioButton_2_clicked()
{
    QSettings settings("carletonU", "comp3004");
    settings.beginGroup("freq");
    settings.setValue("frequency", "10 Hz");
    settings.endGroup();
}

void frequency::on_radioButton_3_clicked()
{
    QSettings settings("carletonU", "comp3004");
    settings.beginGroup("freq");
    settings.setValue("frequency", "20 Hz");
    settings.endGroup();
}

void frequency::on_radioButton_4_clicked()
{
    QSettings settings("carletonU", "comp3004");
    settings.beginGroup("freq");
    settings.setValue("frequency", "60 Hz");
    settings.endGroup();
}

void frequency::on_radioButton_5_clicked()
{
    QSettings settings("carletonU", "comp3004");
    settings.beginGroup("freq");
    settings.setValue("frequency", "77 Hz");
    settings.endGroup();
}

void frequency::on_radioButton_6_clicked()
{
    QSettings settings("carletonU", "comp3004");
    settings.beginGroup("freq");
    settings.setValue("frequency", "125 Hz");
    settings.endGroup();
}

void frequency::on_pushButton_clicked()
{
    close();
}
