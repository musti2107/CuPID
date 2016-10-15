#include "studenteditprofilestoragecontrol.h"
#include <QString>
#include <QTextStream>
#include <vector>
#include <QDebug>

studenteditprofilestoragecontrol::studenteditprofilestoragecontrol()
{
  
}

int studenteditprofilestoragecontrol::confirmit(QString id, QVector<QString> q){


    studentid= id;
    std::vector< std::string > vs;

    //vs= new vector <std::string>;
    for (int i = 0; i< q.size(); i++){
      //qDebug()  <<"Printing contents of Q";
      //qDebug() <<q.at(i);
      vs.push_back(q.at(i).toStdString());
     // qDebug() << vs.at(i);
      //qDebug() << "______________________________________________";
    }




    for (unsigned int v =0; v<vs.size(); v++){
     QString qstr = QString::fromStdString(vs.at(v));

    }
    int check;

    check =s.editProfile(studentid.toStdString(),vs);
    if (check ==0){
        success = new studentprofileeditsuccess();
        success->show();
    }
    else if (check ==1){
        error = new studentprofileediterror();
        error->show();
    }

   //s.registerStudent("123",stu.toStdString(),vs);
        return 0;
}






