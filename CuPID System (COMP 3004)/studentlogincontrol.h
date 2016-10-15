#ifndef studentlogincontrol_H
#define studentlogincontrol_H

#include "QString"
#include "studentloggedin.h"
#include "studentstoragefacade.h"
#include "Storage.h"
#include "loginerror.h"



class studentlogincontrol
{
public:
    studentlogincontrol(QString);
    void show();
    int confirmation();
   
private:
   studentloggedin *stuloggedin;
   QString id;
   studentstoragefacade s;
   //Storage s;
   loginerror *loginer;
   vector<Project*> projects;
};

#endif //studentlogincontrol 
