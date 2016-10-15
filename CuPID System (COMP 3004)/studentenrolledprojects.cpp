#include "studentenrolledprojects.h"
#include "ui_studentenrolledprojects.h"

studentenrolledprojects::studentenrolledprojects(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studentenrolledprojects)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label->setPixmap(pix4);


}

void studentenrolledprojects::populate(QString a, QString b, QString c){
    //a ="Yo";
    ui->listWidget->addItem(a+"  "+b+"  "+c);
}

studentenrolledprojects::~studentenrolledprojects()
{
    delete ui;
}

void studentenrolledprojects::on_pushButton_clicked()
{
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
        if(widget->objectName() == "studentloggedin"){

            widget->setVisible(true);
        }
    this->close();
    }
}
