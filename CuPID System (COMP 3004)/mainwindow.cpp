#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adminloggedin.h"
#include "studentregistering.h"
#include "studentlogin.h"
#include "QGraphicsScene"
#include "QGraphicsView"
#include "QGraphicsPixmapItem"
#include <QDir>

int sig = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    this->move(300,300);
    ui->setupUi(this);
   QPixmap pix(":/cupidVe/images/pp.jpg");
   ui->label->setPixmap(pix);
   QPixmap pix2(":/cupidVe/images/ll.png");
   ui->label_4->setPixmap(pix2);
   QPixmap pix3(":/cupidVe/images/ss.jpg");
   ui->label_6->setPixmap(pix3);



}

MainWindow::~MainWindow()
{

    qDebug()<<"THIS IS A TEST................";
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    admin = new adminlaunchcontrol();
    admin->show();

    this->setVisible(false);

   // if (sig == 1){
     //   this->setVisible(true);
  //  }


    //this->destroy(true);
}

void MainWindow::on_pushButton_3_clicked()
{
    student = new studentlaunchcontrol();
    student-> regisShow();
    this->setVisible(false);

}

void MainWindow::on_pushButton_2_clicked()
{
    student = new studentlaunchcontrol();
    student-> loginShow();
    this->setVisible(false);
}
