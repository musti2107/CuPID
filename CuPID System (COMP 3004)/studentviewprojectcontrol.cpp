#include "studentviewprojectcontrol.h"

studentviewprojectcontrol::studentviewprojectcontrol(QString stuname)
{

    QString name = stuname;
    stuviewproject = new studentviewproject();
    store.projectList(projects);
    for(unsigned int i=0; i< projects.size(); i++){


           QString s = QString::fromStdString(projects.at(i)->getName());
           QString t = QString::fromStdString(projects.at(i)->getProjectId());
           QString w = QString::fromStdString(projects.at(i)->getDescription());

            stuviewproject->populate(t,s,w);
            stuviewproject->setstuId(name);

            stuviewproject->show();

}
}

studentviewprojectcontrol::~studentviewprojectcontrol(){

    projects.clear();
}

//void studentviewprojectcontrol::show(){
    //stuviewproject->setprojects(projects);
    //stuviewproject->populate(projects);



//void studentviewprojectcontrol::getprojectInfo(){

    //grab the data from database and populate the projects vector defined in this class !
//}
