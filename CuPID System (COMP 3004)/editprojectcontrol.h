#ifndef EDITPROJECTCONTROL_H
#define EDITPROJECTCONTROL_H
#include <QString>
#include <vector>
#include "Storage.h"
#include "editproject.h"
#include "projectdoesnotexist.h"
#include "adminstoragefacade.h"
class editprojectcontrol
{
public:
    editprojectcontrol(QString);
    ~editprojectcontrol();

    void show();

private :
    editproject *editproj;
    QString id;
    QString description;
    QString title;
    vector<Project*> projects;
    //Storage store;
    adminstoragefacade store;
    projectdoesnotexist *errordoesntexist;
};

#endif // EDITPROJECTCONTROL_H
