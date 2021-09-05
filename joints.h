#ifndef JOINTS_H
#define JOINTS_H

#include <QDialog>


namespace Ui {
class Joints;
}

class Joints : public QDialog
{
    Q_OBJECT

public:
    explicit Joints(QWidget *parent = nullptr);
    ~Joints();

private slots:
    void on_pushButton_clicked();

    void showTime();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Joints *ui;
    int interval;
    int counter;
};
#endif // JOINTS_H
