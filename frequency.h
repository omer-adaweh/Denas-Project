#ifndef FREQUENCY_H
#define FREQUENCY_H

#include <QDialog>

namespace Ui {
class frequency;
}

class frequency : public QDialog
{
    Q_OBJECT

public:
    explicit frequency(QWidget *parent = nullptr);
    ~frequency();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_5_clicked();

    void on_radioButton_6_clicked();

    void on_pushButton_clicked();

private:
    Ui::frequency *ui;
};

#endif // FREQUENCY_H
