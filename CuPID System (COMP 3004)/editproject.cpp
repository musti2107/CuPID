#include "editproject.h"
#include "ui_editproject.h"

editproject::editproject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editproject)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_3->setPixmap(pix4);

}

editproject::~editproject()
{
    delete ui;
}

void editproject::setDescription(QString s){
    description = s;
    ui->textEdit->setPlainText(description);
}
void editproject::setTitle(QString w){
    title = w;
    ui->lineEdit->setText(title);
}
void editproject::setId(QString i){

    id = i;
}



void editproject::on_pushButton_clicked()
{
   title = ui->lineEdit->text();
   description = ui->textEdit->toPlainText();
   editprojconfirmcontrol = new editprojectconfirmationcontrol(id, title, description);
   this->hide();
}
