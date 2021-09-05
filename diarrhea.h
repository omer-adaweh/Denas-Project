#ifndef DIARRHEA_H
#define DIARRHEA_H

#include <QDialog>

namespace Ui {
class Diarrhea;
}

class Diarrhea : public QDialog
{
    Q_OBJECT

public:
    explicit Diarrhea(QWidget *parent = nullptr);
    ~Diarrhea();

private slots:
    void on_pushButton_clicked();
    void showTime();


    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Diarrhea *ui;
    int interval;
    int counter;
};
#endif // DIARRHEA_H
