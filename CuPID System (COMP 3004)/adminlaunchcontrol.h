#ifndef ADMINLAUNCHCONTROL_H
#define ADMINLAUNCHCONTROL_H
#include "adminloggedin.h"

class adminlaunchcontrol
{
public:
    adminlaunchcontrol();
    void show();
private:
    adminloggedin *admin;
};

#endif // ADMINLAUNCHCONTROL_H
