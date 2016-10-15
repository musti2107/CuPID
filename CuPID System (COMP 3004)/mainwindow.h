#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "adminloggedin.h"
#include "studentregistering.h"
#include "studentlogin.h"
#include "adminlaunchcontrol.h"
#include "studentlaunchcontrol.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    //adminloggedin *ad;
    //studentregistering *studentregister;
    //studentlogin *stulogin;
    adminlaunchcontrol *admin;
    studentlaunchcontrol *student;

};

#endif // MAINWINDOW_H
