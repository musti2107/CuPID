#include "studentprojectregisteringerror.h"
#include "ui_studentprojectregisteringerror.h"

studentprojectregisteringerror::studentprojectregisteringerror(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studentprojectregisteringerror)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_2->setPixmap(pix4);
}

studentprojectregisteringerror::~studentprojectregisteringerror()
{
    delete ui;
}

void studentprojectregisteringerror::on_pushButton_clicked()
{
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
        if(widget->objectName() == "studentloggedin"){

            widget->setVisible(true);
        }
    this->close();
    }
}
