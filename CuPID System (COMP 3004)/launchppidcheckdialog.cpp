#include "launchppidcheckdialog.h"
#include "ui_launchppidcheckdialog.h"

launchppidcheckdialog::launchppidcheckdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::launchppidcheckdialog)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_3->setPixmap(pix4);
}

launchppidcheckdialog::~launchppidcheckdialog()
{
    delete ui;
}
void launchppidcheckdialog::setProjid(string id){projid = id;}

void launchppidcheckdialog::on_pushButton_2_clicked()
{
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
        if(widget->objectName() == "adminloggedin"){

            widget->setVisible(true);
        }
    this->close();
    }
}

void launchppidcheckdialog::on_pushButton_clicked()
{
     success = new ppidrunsuccesscontrol(projid);
     this->close();
}
