#ifndef POWERTWO_H
#define POWERTWO_H

#include <QDialog>
#include "joints.h"

namespace Ui {
class powertwo;
}

class powertwo : public QDialog
{
    Q_OBJECT

public:
    explicit powertwo(QWidget *parent = nullptr);
    ~powertwo();

private slots:
    void on_pushButton_clicked();

    void on_horizontalSlider_sliderPressed();

private:
    Ui::powertwo *ui;
    Joints *joints;
};

#endif // POWERTWO_H
