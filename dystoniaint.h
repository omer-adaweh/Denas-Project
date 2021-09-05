#ifndef DYSTONIAINT_H
#define DYSTONIAINT_H

#include <QDialog>


namespace Ui {
class DystoniaInt;
}

class DystoniaInt : public QDialog
{
    Q_OBJECT

public:
    explicit DystoniaInt(QWidget *parent = nullptr);
    ~DystoniaInt();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DystoniaInt *ui;

};

#endif // DYSTONIAINT_H
