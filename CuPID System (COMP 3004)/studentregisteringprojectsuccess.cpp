#include "studentregisteringprojectsuccess.h"
#include "ui_studentregisteringprojectsuccess.h"

studentregisteringprojectsuccess::studentregisteringprojectsuccess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studentregisteringprojectsuccess)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_2->setPixmap(pix4);
}

studentregisteringprojectsuccess::~studentregisteringprojectsuccess()
{
    delete ui;
}

void studentregisteringprojectsuccess::on_pushButton_clicked()
{
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
        if(widget->objectName() == "studentloggedin"){

            widget->setVisible(true);
        }
    this->close();
    }
}
