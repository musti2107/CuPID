#include "editprojectconfirmation.h"
#include "ui_editprojectconfirmation.h"

editprojectconfirmation::editprojectconfirmation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editprojectconfirmation)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_2->setPixmap(pix4);
}

editprojectconfirmation::~editprojectconfirmation()
{
    delete ui;
}

void editprojectconfirmation::on_pushButton_clicked()
{
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
        if(widget->objectName() == "adminloggedin"){

            widget->setVisible(true);
        }
    this->close();
    }
}
