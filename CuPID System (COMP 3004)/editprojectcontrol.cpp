#include "editprojectcontrol.h"
#include <QString>
#include <QDebug>


editprojectcontrol::editprojectcontrol(QString s)
{
    id = s;
    int q = id.toInt();



    editproj = new editproject();
    store.projectList(projects);
   if ((q > (int)projects.size()) ||  (q < 1) ){

        errordoesntexist = new projectdoesnotexist();
        errordoesntexist->show();
        //qDebug() << "Not avialbles";


    }
    else {

    title = QString::fromStdString(projects.at(q-1)->getName());
    description = QString::fromStdString(projects.at(q-1)->getDescription());

    editproj->setDescription(description);
    editproj->setTitle(title);
    editproj->setId(id);
    editproj->show();
    }
}

editprojectcontrol::~editprojectcontrol(){

    projects.clear();
}



void editprojectcontrol::show(){

   // editproj->show();
}
