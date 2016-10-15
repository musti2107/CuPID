#include "studentprofileediterror.h"
#include "ui_studentprofileediterror.h"

studentprofileediterror::studentprofileediterror(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studentprofileediterror)
{this->move(300,300);
    ui->setupUi(this);
}

studentprofileediterror::~studentprofileediterror()
{
    delete ui;
}
