#include "studentlogin.h"
#include "ui_studentlogin.h"
#include "studentlogincontrol.h"

studentlogin::studentlogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::studentlogin)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_2->setPixmap(pix4);

}

studentlogin::~studentlogin()
{
    delete ui;
}

void studentlogin::on_pushButton_clicked()
{
      stuid = ui->lineEdit->text();

    //check before calling the stulogincontrol show function whether or not the student is logged in using the confirmation function in stulogincontrol
    //stulogincontrol->show();
    stulogincontrol= new studentlogincontrol(stuid);
    this->setVisible(false);
}
