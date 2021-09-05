#ifndef HYPOTONIA_H
#define HYPOTONIA_H

#include <QDialog>

namespace Ui {
class Hypotonia;
}

class Hypotonia : public QDialog
{
    Q_OBJECT

public:
    explicit Hypotonia(QWidget *parent = nullptr);
    ~Hypotonia();

private slots:
    void on_pushButton_clicked();
    void showTime();


    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Hypotonia *ui;
    int interval;
    int counter;
};
#endif // HYPOTONIA_H
