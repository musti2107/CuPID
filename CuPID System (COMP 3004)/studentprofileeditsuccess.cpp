#include "studentprofileeditsuccess.h"
#include "ui_studentprofileeditsuccess.h"

studentprofileeditsuccess::studentprofileeditsuccess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studentprofileeditsuccess)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_2->setPixmap(pix4);
}

studentprofileeditsuccess::~studentprofileeditsuccess()
{
    delete ui;
}

void studentprofileeditsuccess::on_pushButton_clicked()
{
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
        if(widget->objectName() == "studentloggedin"){

            widget->setVisible(true);
        }
    this->close();
    }
}
