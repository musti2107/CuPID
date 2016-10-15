#include "studentenrolledprojectscontrol.h"

studentenrolledprojectscontrol::studentenrolledprojectscontrol(QString s)
{
    id = s;
    cout <<"in enroll project"<< s.toStdString()<<endl;
    store.getStuProjs(s.toStdString(), projects);
    stuproj = new studentenrolledprojects();
    for(unsigned int i =0; i<projects.size(); i++){
        QString p = QString::fromStdString(projects.at(i)->getName());
        QString q = QString::fromStdString(projects.at(i)->getProjectId());
        QString s = QString::fromStdString(projects.at(i)->getDescription());
        stuproj->populate(p,q,s);
    }
    stuproj->show();

}
