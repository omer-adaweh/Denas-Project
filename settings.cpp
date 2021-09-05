#include "settings.h"
#include "ui_settings.h"
#include "childmode.cpp"
#include <QDebug>
#include "mainwindow.h"

settings::settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);
    QSettings settings("carletonU", "comp3004");
    settings.beginGroup("child");
    ui->label_3->setText(settings.value("childmode", "").toString());
    qInfo() << settings.value("childmode", "").toString();
    qInfo() << "het";
    qInfo() << settings.value("child", "").toString();

    QSettings settings_2("carletonU", "comp3004");
    settings_2.beginGroup("freq");
    ui->label_5->setText(settings_2.value("frequency", "1.0 to 9.9 Hz").toString());
    settings_2.endGroup();

}

settings::~settings()
{
    delete ui;
}



void settings::on_pushButton_clicked()
{
    hide();
}
