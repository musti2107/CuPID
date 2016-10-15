#include "errorppid.h"
#include "ui_errorppid.h"

errorppid::errorppid(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::errorppid)
{
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_2->setPixmap(pix4);



}

errorppid::~errorppid()
{
    delete ui;
}

void errorppid::on_pushButton_clicked()
{
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
        if(widget->objectName() == "vadminprojectview"){

            widget->setVisible(true);
        }
    this->close();
    }
}
