#include "addprojectconfirmation.h"
#include "ui_addprojectconfirmation.h"

addprojectconfirmation::addprojectconfirmation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addprojectconfirmation)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_2->setPixmap(pix4);
}

addprojectconfirmation::~addprojectconfirmation()
{
    delete ui;
}

void addprojectconfirmation::on_pushButton_clicked()
{
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
        if(widget->objectName() == "adminloggedin"){

            widget->setVisible(true);
        }
    this->close();
    }
}
