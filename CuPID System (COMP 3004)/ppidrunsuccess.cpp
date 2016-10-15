#include "ppidrunsuccess.h"
#include "ui_ppidrunsuccess.h"

ppidrunsuccess::ppidrunsuccess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ppidrunsuccess)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_5->setPixmap(pix4);





}
void ppidrunsuccess::setProjectId(string p)
{ projectid = p;
  cout<<"projectId from ppidrunsucess -----------------------------------------"<< projectid <<endl;
      ui->projectname->setText(QString::fromStdString(p));
}
void ppidrunsuccess::setPPIddetails(vector<int> & pd)
{
    ppiddetails = pd;
    groupSize = ppiddetails.at(0);
    ui->numberofstudents->setText(QString::number(groupSize));
    cout<<"GroupSize from ppidrunsucess "<< groupSize <<endl;

    grade = ppiddetails.at(1);
    ui->label_12->setText(QString::number(ppiddetails.at(1)));
    cout<<"Grade from ppidrunsucess "<< grade <<endl;
    personal = ppiddetails.at(2);
    ui->label_13->setText(QString::number(ppiddetails.at(2)));
    cout<<"Personal from ppidrunsucess "<< personal <<endl;
    group = ppiddetails.at(3);
    ui->label_14->setText(QString::number(ppiddetails.at(3)));
    cout<<"Group from ppidrunsucess "<< group <<endl;
    misc = ppiddetails.at(4);
    ui->label_15->setText(QString::number(ppiddetails.at(4)));
    cout<<"Misc from ppidrunsucess "<< misc <<endl;
}


ppidrunsuccess::~ppidrunsuccess()
{
    delete ui;
}

void ppidrunsuccess::run(){
    cout << "printing in PPIDrunsuccess " << projectid<<","<<groupSize<<","<<grade<<","<<personal<<","<<group<<","<<misc<<endl;
    test = new PPIDrunControl(projectid, groupSize, grade, personal, group, misc);
    cout << "ppidruncontrol is made" << endl;
    test->runPPID(groups);
    cout<<"ran the ppid" << endl;
    //int maxString = 80;
    int groupNum = 1;
    for(gItr = groups.begin(); gItr != groups.end(); gItr++){
        QString grp = QString::number(groupNum);
        ui->listWidget->addItem("Group Number: "+grp);
        ui->listWidget_2->addItem("Group "+grp+ "'s Total Average Score      " + QString::number((*gItr)->getPS1()) + "      " + QString::number((*gItr)->getPS2())+ "      " + QString::number((*gItr)->getPS3()) + "      " + QString::number((*gItr)->getPS4())
                                  + "      " + QString::number((*gItr)->getS1())+ "      " + QString::number((*gItr)->getS2()) + "      " + QString::number((*gItr)->getS3())
                                  + "      " + QString::number((*gItr)->getS4()));
        ui->listWidget_2->addItem("----------------------------------------------------------------------------------------------------------------------");
        vector<Student *> temp;
        (*gItr)->getStudents(temp);
        for(myItr = temp.begin(); myItr != temp.end(); myItr++){
            QString qstr = QString::fromStdString((*myItr)->getName());
            ui->listWidget->addItem(qstr);
            //qstr.append(QString("").fill(maxString));

            ui->listWidget_2->addItem(qstr+"'s  Total Score:" + "     " + QString::number((*myItr)->getFS1())+ "     " + QString::number((*myItr)->getFS2())+ "     " + QString::number((*myItr)->getFS3())+ "     " + QString::number((*myItr)->getFS4())
                                      + "     " + QString::number((*myItr)->getS1()) + "     " + QString::number((*myItr)->getS2())+ "     " + QString::number((*myItr)->getFS3()) + "     " + QString::number((*myItr)->getS4()));
        }
        ui->listWidget->addItem("\n");
        ui->listWidget_2->addItem("\n");
        groupNum++;
    }
    ui->numberofgroups->setText(QString::number(groupNum-1));







}

void ppidrunsuccess::on_pushButton_clicked()
{
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
        if(widget->objectName() == "vadminprojectview"){

            widget->setVisible(true);
        }
    this->close();
    }
}
