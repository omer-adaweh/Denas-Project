#ifndef TUTORIAL_H
#define TUTORIAL_H

#include <QDialog>
#include "tutorial_2.h"


namespace Ui {
class tutorial;
}

class tutorial : public QDialog
{
    Q_OBJECT

public:
    explicit tutorial(QWidget *parent = nullptr);
    ~tutorial();

private slots:
    void on_pushButton_clicked();

private:
    Ui::tutorial *ui;
    tutorial_2 *tutorial_2;

};

#endif // TUTORIAL_H
