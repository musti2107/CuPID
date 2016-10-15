#include "addproject.h"
#include "ui_addproject.h"
//#include "Storage.h"
#include <QString>
#include "string.h"


addproject::addproject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addproject)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_4->setPixmap(pix4);


}

addproject::~addproject()
{
    delete ui;
}

void addproject::on_pushButton_clicked()
{
    //String title = ui->lineEdit->text();
    //String description = ui->plainTextEdit->toPlainText();
    //store.addProject(ui->lineEdit->text().toStdString(), ui->plainTextEdit->toPlainText().toStdString());

    title = ui->lineEdit->text();
    description = ui->plainTextEdit->toPlainText();


    if (title.length()<1){
     ui->pushButton->setEnabled(false);
     title.clear();
     description.clear();
     ui->label_3->setText("Please Enter all the required fields");
     ui->pushButton->setEnabled(true);
     return;
    }

    if(description.length()<1){
        ui->pushButton->setEnabled(false);
        title.clear();
        description.clear();
        ui->label_3->setText("Please Enter all the required fields");
        ui->pushButton->setEnabled(true);
        return;

    }

     ui->label_3->setText("");









    addprojconfirmcontrol = new addprojectconfirmationcontrol(title, description);
     this->close();
}

void addproject::on_pushButton_2_clicked()
{
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
        if(widget->objectName() == "adminloggedin"){

            widget->setVisible(true);
        }
    this->close();
    }

}
