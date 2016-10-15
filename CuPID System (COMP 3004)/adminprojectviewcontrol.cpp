#include "adminprojectviewcontrol.h"
#include "Admin.h"
#include "vadminprojectview.h"
#include "Storage.h"

#include "QTextStream"


adminprojectviewcontrol::adminprojectviewcontrol()
{

 
   // administrator = new Admin();
         view = new vadminprojectview();
         store.projectList(projects);
       /*  PPIDrunControl *test = new PPIDrunControl("4");
         test->runPPID();*/

}

adminprojectviewcontrol::~adminprojectviewcontrol(){

    projects.clear();
}



void adminprojectviewcontrol::launchprojectview(){


    for(unsigned int i=0; i< projects.size(); i++){


           QString s = QString::fromStdString(projects.at(i)->getName());
           QString t = QString::fromStdString(projects.at(i)->getProjectId());
           QString w = QString::fromStdString(projects.at(i)->getDescription());

            view->populateProjects(t,s,w);
    }


    view->show();

}
