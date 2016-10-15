#include "studentregistrationcontrol.h"
#include <vector>
#include <string>
#include <QTextStream>

studentregistrationcontrol::studentregistrationcontrol()
{



   
}

/*
void studentregistrationcontrol::setanswers(QVector<QString> qs){
    answers = qs;
}
*/

studentregistrationcontrol::~studentregistrationcontrol(){
    answers.clear();
}

int studentregistrationcontrol::confirmregistration(QString name, QString id, QVector<QString>* q){





    studentname = name;
    studentid= id;
    std::vector< std::string > vs;
    //vs.push_back(QString("23").toStdString());



    //vs= new vector <std::string>;
    for (int i = 0; i< q->size(); i++){

       vs.push_back(q->at(i).toStdString());

      // vs.at(i) = QString("23").toStdString();

    }





    int check = s.registerStudent(studentid.toStdString(),studentname.toStdString(),vs);

   //s.registerStudent("123",studentname.toStdString(),vs);
        return check;
}



