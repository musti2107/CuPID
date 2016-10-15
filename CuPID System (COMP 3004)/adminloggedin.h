#ifndef ADMINLOGGEDIN_H
#define ADMINLOGGEDIN_H
#include "adminprojectviewcontrol.h"
#include "addprojectcontrol.h"
#include "ppidcontrol.h"

#include <QWidget>

namespace Ui {
class adminloggedin;
}

class adminloggedin : public QWidget
{
    Q_OBJECT

public:

    explicit adminloggedin(QWidget *parent = 0);
    ~adminloggedin();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::adminloggedin *ui;
    adminprojectviewcontrol *adminPview;
    addprojectcontrol *addprojcontrol;
    PPIDcontrol *editppid;

};

#endif // ADMINLOGGEDIN_H
