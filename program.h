#ifndef PROGRAM_H
#define PROGRAM_H

#include <QDialog>
#include "power.h"
#include "powertwo.h"
#include "powerthree.h"
#include "powerfour.h"



namespace Ui {
class Program;
}

class Program : public QDialog
{
    Q_OBJECT

public:
    explicit Program(QWidget *parent = nullptr);
    ~Program();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::Program *ui;
    Power *power;
    powertwo *powertwo;
    powerthree *powerthree;
    powerfour *powerfour;

};

#endif // PROGRAM_H
