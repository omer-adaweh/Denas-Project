#ifndef POWER_H
#define POWER_H

#include <QDialog>
#include "dysonia.h"
namespace Ui {
class Power;
}

class Power : public QDialog
{
    Q_OBJECT

public:
    explicit Power(QWidget *parent = nullptr);
    ~Power();

private slots:
    void on_pushButton_clicked();

    void on_horizontalSlider_sliderPressed();

private:
    Ui::Power *ui;
    Dysonia* dystonia;
};

#endif // POWER_H
