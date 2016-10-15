#include "ppid.h"
#include "ui_ppid.h"
#include <QString>
#include <QDebug>

PPID::PPID(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PPID)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_9->setPixmap(pix4);
    a = "2";
    b = "3";
    c = "2";
    d = "1";
    e = "4";
    ui->lineEdit->setText(a);
    ui->lineEdit_2->setText(b);
    ui->lineEdit_3->setText(c);
    ui->lineEdit_4->setText(d);
    ui->lineEdit_5->setText(e);
    ui->lineEdit_2->setValidator(new QIntValidator(1,4,this));
    ui->lineEdit_3->setValidator(new QIntValidator(1,4,this));
    ui->lineEdit_4->setValidator(new QIntValidator(1,4,this));
ui->lineEdit_5->setValidator(new QIntValidator(1,4,this));}

PPID::~PPID()
{
    delete ui;
}

void PPID::on_pushButton_clicked()
{
    if (ui->lineEdit_2->text() == ui->lineEdit_3->text() ||
        ui->lineEdit_2->text() == ui->lineEdit_4->text() ||
        ui->lineEdit_2->text() == ui->lineEdit_5->text() ||
            ui->lineEdit_2->text().contains("0")) {
        //qDebug() <<"-------------------------------\n";
        ui->pushButton->setEnabled(false);
        ui->lineEdit_2->text().clear();
         ui->lineEdit_3->text().clear();
          ui->lineEdit_4->text().clear();
           ui->lineEdit_5->text().clear();
           ui->label_8->setText("<font color ='red'> Error! Missing fields or duplicates");
           ui->pushButton->setEnabled(true);
           return;


    }

    if (ui->lineEdit_3->text() == ui->lineEdit_2->text() ||
        ui->lineEdit_3->text() == ui->lineEdit_4->text() ||
        ui->lineEdit_3->text() == ui->lineEdit_5->text() ||
            ui->lineEdit_3->text().contains("0")   ) {
        //qDebug() <<"-------------------------------\n";
        ui->pushButton->setEnabled(false);
        ui->lineEdit_2->text().clear();
         ui->lineEdit_3->text().clear();
          ui->lineEdit_4->text().clear();
           ui->lineEdit_5->text().clear();
           ui->label_8->setText("<font color ='red'> Error! You have duplicates");
           ui->pushButton->setEnabled(true);
           return;
    }


    if (ui->lineEdit_4->text() == ui->lineEdit_2->text() ||
        ui->lineEdit_4->text() == ui->lineEdit_3->text() ||
        ui->lineEdit_4->text() == ui->lineEdit_5->text() ||
            ui->lineEdit_4->text().contains("0")   ) {
       // qDebug() <<"-------------------------------\n";
        ui->pushButton->setEnabled(false);
        ui->lineEdit_2->text().clear();
         ui->lineEdit_3->text().clear();
          ui->lineEdit_4->text().clear();
           ui->lineEdit_5->text().clear();
           ui->label_8->setText("<font color ='red'> Error! You have duplicates");
           ui->pushButton->setEnabled(true);
           return;

    }

    if (ui->lineEdit_5->text() == ui->lineEdit_3->text() ||
        ui->lineEdit_5->text() == ui->lineEdit_4->text() ||
        ui->lineEdit_5->text() == ui->lineEdit_2->text() ||
            ui->lineEdit_5->text().contains("0")   ) {
       // qDebug() <<"-------------------------------\n";
        ui->pushButton->setEnabled(false);
        ui->lineEdit_2->text().clear();
         ui->lineEdit_3->text().clear();
          ui->lineEdit_4->text().clear();
           ui->lineEdit_5->text().clear();

           ui->label_8->setText("<font color ='red'> Error! You have duplicates");
           ui->pushButton->setEnabled(true);
           return;
    }


    ppidedit = new ppideditedcontrol(ui->lineEdit->text().toStdString(), ui->lineEdit_2->text().toStdString(), ui->lineEdit_5->text().toStdString(), ui->lineEdit_4->text().toStdString(), ui->lineEdit_3->text().toStdString());
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
        if(widget->objectName() == "adminloggedin"){
            if(widget->isVisible()== false){
            widget->setVisible(true);}
        }
    this->close();
    }
}

void PPID::on_pushButton_2_clicked()
{
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
        if(widget->objectName() == "adminloggedin"){

            widget->setVisible(true);
        }
    this->close();
    }
}

int PPID::getA()
{
    return a.toInt();
}

int PPID::getB(){
    return b.toInt();
}

int PPID::getC(){
    return c.toInt();
}

int PPID::getD(){
    return d.toInt();
}

int PPID::getE(){
    return e.toInt();
}
