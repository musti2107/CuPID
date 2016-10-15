#include "studentregistering.h"
#include "ui_studentregistering.h"
#include "studentregistrationcontrol.h"
#include <QTextStream>

studentregistering::studentregistering(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::studentregistering)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_32->setPixmap(pix4);
    /*
    ui->comboBox->addItem("C++");
    ui->comboBox->addItem("JAVA");
    ui->comboBox->addItem("PYTHON");

    ui->comboBox_2->addItem("C++");
    ui->comboBox_2->addItem("JAVA");
    ui->comboBox_2->addItem("PYTHON");
    */
    ui->spinBox->setMinimum(1);
    ui->spinBox_2->setMinimum(1);
    ui->spinBox_3->setMinimum(1);

    ui->spinBox_4->setMinimum(1);
    ui->spinBox_5->setMinimum(1);
    ui->spinBox_6->setMinimum(1);

    ui->spinBox_7->setMinimum(1);
    ui->spinBox_8->setMinimum(1);
    ui->spinBox_9->setMinimum(1);

    ui->spinBox_10->setMinimum(1);
    ui->spinBox_11->setMinimum(1);
    ui->spinBox_12->setMinimum(1);

    ui->spinBox_13->setMinimum(1);
    ui->spinBox_14->setMinimum(1);
    ui->spinBox_15->setMinimum(1);

    ui->spinBox_16->setMinimum(1);
    ui->spinBox_17->setMinimum(1);
    ui->spinBox_18->setMinimum(1);

    ui->spinBox_19->setMinimum(1);
    ui->spinBox_20->setMinimum(1);
    ui->spinBox_21->setMinimum(1);
    ui->spinBox_22->setMinimum(1);
    ui->spinBox_23->setMinimum(1);
    ui->spinBox_24->setMinimum(1);

    ui->spinBox->setMaximum(5);
    ui->spinBox_2->setMaximum(5);
    ui->spinBox_3->setMaximum(5);

    ui->spinBox_4->setMaximum(5);
    ui->spinBox_5->setMaximum(5);
    ui->spinBox_6->setMaximum(5);

    ui->spinBox_7->setMaximum(5);
    ui->spinBox_8->setMaximum(5);
    ui->spinBox_9->setMaximum(5);

    ui->spinBox_10->setMaximum(5);
    ui->spinBox_11->setMaximum(5);
    ui->spinBox_12->setMaximum(3);

    ui->spinBox_13->setMaximum(5);
    ui->spinBox_14->setMaximum(5);
    ui->spinBox_15->setMaximum(5);

    ui->spinBox_16->setMaximum(5);
    ui->spinBox_17->setMaximum(5);
    ui->spinBox_18->setMaximum(5);

    ui->spinBox_19->setMaximum(5);
    ui->spinBox_20->setMaximum(5);
    ui->spinBox_21->setMaximum(5);
    ui->spinBox_22->setMaximum(5);
    ui->spinBox_23->setMaximum(5);
    ui->spinBox_24->setMaximum(3);

    name = ui->lineEdit->text();
    id = ui->lineEdit_2->text();


}
/*
void studentregistering::getInfo(){


    qs.append(ui->spinBox->text());
    qs.append(ui->spinBox_2->text());
    qs.append(ui->spinBox_3->text());
    qs.append(ui->spinBox_4->text());
    qs.append(ui->spinBox_5->text());
    qs.append(ui->spinBox_6->text());
    qs.append(ui->spinBox_7->text());
    qs.append(ui->spinBox_8->text());
    qs.append(ui->spinBox_9->text());
    qs.append(ui->spinBox_10->text());
    qs.append(ui->spinBox_11->text());
    if(q12 == "C++"){
        q12 = "1";
     }
    else if (q12 == "JAVA") {
        q12 == "2";
    }
    else{
        q12 == "3";
    }
    qs.append(q12);
    qs.append(ui->spinBox_12->text());
    qs.append(ui->spinBox_13->text());
    qs.append(ui->spinBox_14->text());
    qs.append(ui->spinBox_15->text());
    qs.append(ui->spinBox_16->text());
    qs.append(ui->spinBox_17->text());
    qs.append(ui->spinBox_18->text());
    qs.append(ui->spinBox_19->text());
    qs.append(ui->spinBox_20->text());
    qs.append(ui->spinBox_21->text());
    qs.append(ui->spinBox_22->text());
    if(q24 == "C++"){
        q24 = "1";
     }
    else if (q24 == "JAVA") {
        q24 == "2";
    }
    else{
        q24 == "3";
    }
    qs.append(q24);

}
*/
studentregistering::~studentregistering()
{
    qs.clear();
    delete ui;
}
/*
QVector<QString> studentregistering::getanswers(){return qs;}
*/



void studentregistering::on_pushButton_clicked()
{

    name= ui->lineEdit->text();
    id = ui->lineEdit_2->text();


    if (id.length()<1 || id.length()>9){
     ui->pushButton->setEnabled(false);
     name.clear();
     id.clear();
     ui->label_31->setText("Please Enter all the required fields");
     ui->pushButton->setEnabled(true);
     return;
    }

    if(name.length()<1){
        ui->pushButton->setEnabled(false);
        name.clear();
        id.clear();
        ui->label_31->setText("Please Enter all the required fields");
        ui->pushButton->setEnabled(true);
        return;

    }

     ui->label_31->setText("");


    qs.append(ui->spinBox->text());

    qs.append(ui->spinBox_2->text());
    qs.append(ui->spinBox_3->text());
    qs.append(ui->spinBox_4->text());
    qs.append(ui->spinBox_5->text());
    qs.append(ui->spinBox_6->text());
    qs.append(ui->spinBox_7->text());
    qs.append(ui->spinBox_8->text());
    qs.append(ui->spinBox_9->text());
    qs.append(ui->spinBox_10->text());
    qs.append(ui->spinBox_11->text());
    qs.append(ui->spinBox_12->text());



    qs.append(ui->spinBox_13->text());
    qs.append(ui->spinBox_14->text());
    qs.append(ui->spinBox_15->text());
    qs.append(ui->spinBox_16->text());
    qs.append(ui->spinBox_17->text());
    qs.append(ui->spinBox_18->text());
    qs.append(ui->spinBox_19->text());
    qs.append(ui->spinBox_20->text());
    qs.append(ui->spinBox_21->text());
    qs.append(ui->spinBox_22->text());
    qs.append(ui->spinBox_23->text());
    qs.append(ui->spinBox_24->text());


  // CONVERT THE COMBOXBOX TO STRING AND USE THE C++ STD STRING LIB COMPARISON


    registercheck = new studentregistrationcontrol();


     int check = registercheck->confirmregistration(name, id, &qs);
     if (check == 1){
       error = new studentregisteringerror();
       error->show();
       this->hide();
       name.clear();
       id.clear();
       qs.clear();



     }
     else if(check == 0)
     {
         sturegissuccess = new studentregisteringsuccess();
         sturegissuccess->show();
         name.clear();
         id.clear();
         qs.clear();
         this->close();
     }

}
/*
void studentregistering::on_comboBox_2_activated(const QString &arg1)
{
    q12 =  arg1;
}


void studentregistering::on_comboBox_activated(const QString &arg1)
{
    q24 = arg1;
}
*/

void studentregistering::on_pushButton_2_clicked()
{
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
            if(widget->objectName() == "MainWindow"){

                widget->setVisible(true);
            }

    }
    name.clear();
    id.clear();
    qs.clear();
    this->close();
}
