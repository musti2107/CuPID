#ifndef EDITPROJECTCONFIRMATIONCONTROL_H
#define EDITPROJECTCONFIRMATIONCONTROL_H

#include "editprojectconfirmation.h"

#include <QString>
#include <string>
#include <vector>
#include "Storage.h"
#include "adminstoragefacade.h"
class editprojectconfirmationcontrol
{
public:
    editprojectconfirmationcontrol(QString, QString, QString);
    ~editprojectconfirmationcontrol();

private:
    //Storage store;
    adminstoragefacade store;
    string id;
    string title;
    string description;
    vector<Project*> projects;
    editprojectconfirmation *editprojconfirm;

};

#endif // EDITPROJECTCONFIRMATIONCONTROL_H
