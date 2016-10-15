#ifndef ADMINPROJECTVIEWCONTROL_H
#define ADMINPROJECTVIEWCONTROL_H

#include "Admin.h"
#include "Storage.h"
#include "Project.h"
#include "vadminprojectview.h"
#include <QString>
#include "QTextStream"
#include <vector>
#include <iostream>
#include "Storage.h"
#include "adminstoragefacade.h"
//#include "PPIDrunControl.h"

using namespace std;


class adminprojectviewcontrol
{
public:
    adminprojectviewcontrol();
    ~adminprojectviewcontrol();
    void launchprojectview();

private:

    Admin *administrator;
    vadminprojectview *view;
    //Storage store;
    adminstoragefacade store;
    vector<Project*> projects;
    //vector<Project*>::iterator it;

    
};

#endif // ADMINCONTROL_H
