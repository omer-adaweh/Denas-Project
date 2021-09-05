#ifndef POWERTHREE_H
#define POWERTHREE_H

#include <QDialog>
#include "diarrhea.h"

namespace Ui {
class powerthree;
}

class powerthree : public QDialog
{
    Q_OBJECT

public:
    explicit powerthree(QWidget *parent = nullptr);
    ~powerthree();

private slots:
    void on_pushButton_clicked();

    void on_horizontalSlider_sliderPressed();

private:
    Ui::powerthree *ui;
    Diarrhea *diarrhea;
};

#endif // POWERTHREE_H
