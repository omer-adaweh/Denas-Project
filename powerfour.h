#ifndef POWERFOUR_H
#define POWERFOUR_H

#include <QDialog>
#include "hypotonia.h"

namespace Ui {
class powerfour;
}

class powerfour : public QDialog
{
    Q_OBJECT

public:
    explicit powerfour(QWidget *parent = nullptr);
    ~powerfour();

private slots:
    void on_pushButton_clicked();

    void on_horizontalSlider_sliderPressed();

private:
    Ui::powerfour *ui;
    Hypotonia *hypotonia;
};

#endif // POWERFOUR_H
