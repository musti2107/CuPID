#ifndef STUDENTLOGGEDIN_H
#define STUDENTLOGGEDIN_H

#include <QMainWindow>
#include "studenteditquestionscontrol.h"
#include "studentviewprojectcontrol.h"
#include "QString"
#include "studentenrolledprojectscontrol.h"

namespace Ui {
class studentloggedin;
}

class studentloggedin : public QMainWindow
{
    Q_OBJECT

public:
    explicit studentloggedin(QWidget *parent = 0);
    ~studentloggedin();
    void setId(QString);


private slots:
    void on_pushButton_3_clicked();




    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::studentloggedin *ui;
    studenteditquestionscontrol *stueditquestioncontrol;
    studentviewprojectcontrol *stuviewprojectcontrol;
    studentenrolledprojectscontrol *stuenrolprojectcontrol;
    QString stuid;
};

#endif // STUDENTLOGGEDIN_H
