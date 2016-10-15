#include "studentviewproject.h"
#include "ui_studentviewproject.h"
#include "QTextStream"

studentviewproject::studentviewproject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::studentviewproject)
{
this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_2->setPixmap(pix4);
}



void studentviewproject::setprojects(QVector<QString> projs){



}

void studentviewproject::populate(QString s, QString q, QString l){
    ui->listWidget->addItem(s+"\t"+q+"\t"+l);
}
studentviewproject::~studentviewproject()
{
    projects.clear();
    delete ui;
}

void studentviewproject::setstuId(QString i)
{
   stuId = i;
}


/*
 *
 * adminprojectviewcontrol::adminprojectviewcontrol()
{


   // administrator = new Admin();
         view = new vadminprojectview();
         store.projectList(projects);


}


void adminprojectviewcontrol::launchprojectview(){


    for(int i=0; i< projects.size(); i++){


           QString s = QString::fromStdString(projects.at(i)->getName());
           QString t = QString::fromStdString(projects.at(i)->getProjectId());
           QString w = QString::fromStdString(projects.at(i)->getDescription());

            view->populateProjects(t,s,w);
    }
    */




void studentviewproject::on_pushButton_clicked()
{

    stureg= new studentprojregistrationcontrol(stuId,ui->lineEdit_2->text() );
    this->close();
}





void studentviewproject::on_listWidget_clicked(const QModelIndex &index)
{
     ui->lineEdit_2->setText(QString::number(index.row()+1));
}

void studentviewproject::on_pushButton_2_clicked()
{
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
        if(widget->objectName() == "studentloggedin"){

            widget->setVisible(true);
        }
    this->close();
    }
}
