#ifndef ADDPROJECTCONTROL_H
#define ADDPROJECTCONTROL_H
#include "addproject.h"
#include "Storage.h"
class addprojectcontrol
{
public:
    addprojectcontrol();
    void show();
private:
    addproject *addproj;
    Storage store;


};

#endif // ADDPROJECTCONTROL_H
