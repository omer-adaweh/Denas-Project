#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "program.h"
#include "help.h"
#include "program.h"
#include "tutorial.h"
#include "childmode.h"
#include "settings.h"
#include "frequency.h"
#include "about.h"






QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_About_clicked();

private:
    Ui::MainWindow *ui;
    Program *program;
    help *help;
    tutorial *tutorial;
    childmode *childmode;
    settings *settings;
    frequency *frequency;
    about *about;



};
#endif // MAINWINDOW_H
