#include "editprojectconfirmationcontrol.h"


editprojectconfirmationcontrol::editprojectconfirmationcontrol(QString i, QString n, QString d)
{
    id = i.toStdString();
    title = n.toStdString();
    description = d.toStdString();
    store.projectList(projects);

    int check = store.editProject(id, title, description);

    if(check == 0 ){
        editprojconfirm = new editprojectconfirmation();
        editprojconfirm->show();
    }



}

editprojectconfirmationcontrol::~editprojectconfirmationcontrol(){

    projects.clear();
}
