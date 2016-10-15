#include "studenteditquestions.h"
#include "ui_studenteditquestions.h"
#include <QDebug>

studenteditquestions::studenteditquestions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::studenteditquestions)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_29->setPixmap(pix4);

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



   /* ui->comboBox->addItem("C++");
    ui->comboBox->addItem("JAVA");
    ui->comboBox->addItem("PYTHON");

    ui->comboBox_2->addItem("C++");
    ui->comboBox_2->addItem("JAVA");
    ui->comboBox_2->addItem("PYTHON");
*/
}
void studenteditquestions::setQs(QVector<QString> qs){
    vs = qs;

}

void studenteditquestions::populate(){
    // qDebug() << "VS At 2";
     //qDebug() << vs.at(2);
    ui->spinBox->setValue(vs.at(2).toInt());

    ui->spinBox_2->setValue(vs.at(3).toInt());
    ui->spinBox_3->setValue(vs.at(4).toInt());
    ui->spinBox_4->setValue(vs.at(5).toInt());
    ui->spinBox_5->setValue(vs.at(6).toInt());
    ui->spinBox_6->setValue(vs.at(7).toInt());
    ui->spinBox_7->setValue(vs.at(8).toInt());
    ui->spinBox_8->setValue(vs.at(9).toInt());
    ui->spinBox_9->setValue(vs.at(10).toInt());
    ui->spinBox_10->setValue(vs.at(11).toInt());
    ui->spinBox_11->setValue(vs.at(12).toInt());
    ui->spinBox_12->setValue(vs.at(13).toInt());

    ui->spinBox_13->setValue(vs.at(14).toInt());
    ui->spinBox_14->setValue(vs.at(15).toInt());
    ui->spinBox_15->setValue(vs.at(16).toInt());
    ui->spinBox_16->setValue(vs.at(17).toInt());
    ui->spinBox_17->setValue(vs.at(18).toInt());
    ui->spinBox_18->setValue(vs.at(19).toInt());
    ui->spinBox_19->setValue(vs.at(20).toInt());
    ui->spinBox_20->setValue(vs.at(21).toInt());
    ui->spinBox_21->setValue(vs.at(22).toInt());
    ui->spinBox_22->setValue(vs.at(23).toInt());
    ui->spinBox_23->setValue(vs.at(24).toInt());
    ui->spinBox_24->setValue(vs.at(25).toInt());




    /*
    ui->comboBox->addItem("C++");
    ui->comboBox->addItem("JAVA");
    ui->comboBox->addItem("PYTHON");
    ui->comboBox->setCurrentIndex(0);
    ui->comboBox_2->addItem("C++");
    ui->comboBox_2->addItem("JAVA");
    ui->comboBox_2->addItem("PYTHON");
    ui->comboBox_2->setCurrentIndex(2);
    */
}

studenteditquestions::~studenteditquestions()
{
    vs.clear();
    qs.clear();
    delete ui;
}

void studenteditquestions::setstudentid(QString sid){stunum= sid;}
//void studenteditquestions::setstudentname(QString sname){stuname =sname;}

void studenteditquestions::on_pushButton_clicked()
{

   editcontrol = new studenteditprofilestoragecontrol();
   qs.append(ui->spinBox->text());
   //qDebug() <<"DONE APPENDING";
   qs.append(ui->spinBox_2->text());
   qs.append(ui->spinBox_3->text());
   qs.append(ui->spinBox_4->text());
   qs.append(ui->spinBox_5->text());
   qs.append(ui->spinBox_6->text());
   qs.append(ui->spinBox_7->text());
   qs.append(ui->spinBox_8->text());
   qs.append(ui->spinBox_9->text());
   //qDebug() << ui->spinBox_9->text();
   //qDebug() << "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";

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

   std::vector<std::string> final;

   //qDebug()<< " DONE APPENDING 2";
   editcontrol->confirmit(stunum,qs);
    this->close();


}
