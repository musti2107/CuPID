#include "studentregisteringerror.h"
#include "ui_studentregisteringerror.h"

studentregisteringerror::studentregisteringerror(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studentregisteringerror)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_2->setPixmap(pix4);
}

studentregisteringerror::~studentregisteringerror()
{
    delete ui;
}

void studentregisteringerror::on_pushButton_clicked()
{
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
        if(widget->objectName() == "MainWindow"){

            widget->setVisible(true);
        }
    this->close();
    }
}
