#include "studentloggedin.h"
#include "ui_studentloggedin.h"


studentloggedin::studentloggedin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::studentloggedin)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label->setPixmap(pix4);


}

studentloggedin::~studentloggedin()
{
    delete ui;
}

void studentloggedin::setId(QString s){
    stuid = s;
}

void studentloggedin::on_pushButton_3_clicked()
{
 stueditquestioncontrol = new studenteditquestionscontrol(stuid);
 stueditquestioncontrol->show();
 this->hide();
}

void studentloggedin::on_pushButton_clicked()
{
    stuviewprojectcontrol = new studentviewprojectcontrol(stuid);
    this->setVisible(false);

}

void studentloggedin::on_pushButton_2_clicked()
{
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
            if(widget->objectName() == "MainWindow"){

                widget->setVisible(true);
            }
 this->close();
    }
}



void studentloggedin::on_pushButton_4_clicked()
{
    cout << stuid.toStdString()<<endl;
    stuenrolprojectcontrol = new studentenrolledprojectscontrol(stuid);
    this->setVisible(false);

}
