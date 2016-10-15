#ifndef PPIDRUNSUCCESSCONTROL_H
#define PPIDRUNSUCCESSCONTROL_H

#include "ppidrunsuccess.h"
#include "adminstoragefacade.h"
#include <vector>
#include <errorppid.h>
class ppidrunsuccesscontrol
{
public:
    ppidrunsuccesscontrol(string);
private:

     ppidrunsuccess *success;
     string projectid;
     vector<int> ppiddetails;
     adminstoragefacade store;
     errorppid *e;

};

#endif // PPIDRUNSUCCESSCONTROL_H
