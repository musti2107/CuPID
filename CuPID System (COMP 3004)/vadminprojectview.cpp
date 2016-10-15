#include "vadminprojectview.h"
#include "ui_vadminprojectview.h"

vadminprojectview::vadminprojectview(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::vadminprojectview)
{   this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_2->setPixmap(pix4);
  //  QPixmap pix5(":/cupidVe/images/pp.jpg");
   // ui->label_3->setPixmap(pix5);


}

vadminprojectview::~vadminprojectview()
{
    delete ui;
}

void vadminprojectview::populateProjects(QString s, QString q, QString l){

    ui->listWidget->addItem(s+"\t"+q+"\t"+l);
}



void vadminprojectview::on_pushButton_2_clicked()
{

    QString id = ui->lineEdit->text();
    //QString id = ui->listWidget->selectedItems()[0];


    //editprojcontrol = new editprojectcontrol(id, name);
    editprojcontrol = new editprojectcontrol(id);
   // editprojcontrol->show();
    this->close();

}

/*void vadminprojectview::on_listWidget_clicked(const QModelIndex &index)
{
   id = index.column();
   QString v= QString::number(id);
   ui->lineEdit->setText(v);
}

void vadminprojectview::on_listWidget_itemClicked(QListWidgetItem *item)
{
    item


}
*/
void vadminprojectview::on_listWidget_clicked(const QModelIndex &index)
{
    ui->lineEdit->setText(QString::number(index.row()+1));

}

void vadminprojectview::on_pushButton_clicked()
{
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
        if(widget->objectName() == "adminloggedin"){

            widget->setVisible(true);
        }
    this->close();
    }
}

void vadminprojectview::on_pushButton_3_clicked()
{   cout<<"PROJ_ID "<<ui->lineEdit->text().toStdString()<<endl;
    launch = new launchppidcheckcontrol(ui->lineEdit->text().toStdString());
    this->close();


}
