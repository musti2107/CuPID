#include "studentregisteringsuccess.h"
#include "ui_studentregisteringsuccess.h"

studentregisteringsuccess::studentregisteringsuccess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studentregisteringsuccess)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_2->setPixmap(pix4);
}

studentregisteringsuccess::~studentregisteringsuccess()
{
    delete ui;
}

void studentregisteringsuccess::on_pushButton_clicked()
{
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
        if(widget->objectName() == "MainWindow"){

            widget->setVisible(true);
        }
    this->close();
    }
}
