#ifndef TUTORIAL_2_H
#define TUTORIAL_2_H

#include <QDialog>
#include "tutorial_3.h"


namespace Ui {
class tutorial_2;
}

class tutorial_2 : public QDialog
{
    Q_OBJECT

public:
    explicit tutorial_2(QWidget *parent = nullptr);
    ~tutorial_2();

private slots:

    void on_pushButton_clicked();

private:
    Ui::tutorial_2 *ui;
    tutorial_3 *tutorial_3;

};

#endif // TUTORIAL_2_H
