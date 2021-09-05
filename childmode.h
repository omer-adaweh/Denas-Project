#ifndef CHILDMODE_H
#define CHILDMODE_H

#include <QDialog>

namespace Ui {
class childmode;
}

class childmode : public QDialog
{
    Q_OBJECT

public:
    explicit childmode(QWidget *parent = nullptr);
    ~childmode();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_5_clicked();

private:
    Ui::childmode *ui;
};

#endif // CHILDMODE_H
