#ifndef TUTORIAL_3_H
#define TUTORIAL_3_H

#include <QDialog>

namespace Ui {
class tutorial_3;
}

class tutorial_3 : public QDialog
{
    Q_OBJECT

public:
    explicit tutorial_3(QWidget *parent = nullptr);
    ~tutorial_3();

private slots:
    void on_pushButton_clicked();

private:
    Ui::tutorial_3 *ui;
};

#endif // TUTORIAL_3_H
