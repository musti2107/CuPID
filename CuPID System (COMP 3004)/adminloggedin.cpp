#include "adminloggedin.h"
#include "ui_adminloggedin.h"
#include "adminprojectviewcontrol.h"
#include "ppidcontrol.h"
#include "mainwindow.h"

extern int sig;

adminloggedin::adminloggedin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminloggedin)
{   this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label->setPixmap(pix4);
    addprojcontrol = new addprojectcontrol();
    editppid = new PPIDcontrol();

}

adminloggedin::~adminloggedin()
{
    delete ui;
}

void adminloggedin::on_pushButton_2_clicked()
{
    adminPview = new adminprojectviewcontrol();
    adminPview->launchprojectview();
    this->setVisible(false);


}

void adminloggedin::on_pushButton_clicked()
{
    addprojcontrol->show();
    this->setVisible(false);
}

void adminloggedin::on_pushButton_3_clicked()
{
    editppid->show();
    this->setVisible(false);
}

void adminloggedin::on_pushButton_4_clicked(){

    foreach (QWidget *widget, QApplication::topLevelWidgets()){
            if(widget->objectName() == "MainWindow"){

                widget->setVisible(true);
            }
 this->close();
    }

}
