#ifndef DYSONIA_H
#define DYSONIA_H

#include <QDialog>

namespace Ui {
class Dysonia;
}

class Dysonia : public QDialog
{
    Q_OBJECT

public:
    explicit Dysonia(QWidget *parent = nullptr);
    ~Dysonia();

private slots:
    void on_pushButton_clicked();
    void showTime();


    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dysonia *ui;
    int interval;
    int counter;
};

#endif // DYSONIA_H
