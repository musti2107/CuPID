#ifndef LAUNCHPPIDCHECKCONTROL_H
#define LAUNCHPPIDCHECKCONTROL_H
#include "string.h"
#include "launchppidcheckdialog.h"
#include "ppidrunsuccesscontrol.h"
#include "adminstoragefacade.h"
#include <vector>
#include "Student.h"
#include "ppidgrouperror.h"
class launchppidcheckcontrol
{
public:
    launchppidcheckcontrol(string);
private:
    string projid;

    adminstoragefacade *store;
    vector<Student*> students;
    vector<int> ppidinfo;
    launchppidcheckdialog *dialog;
    ppidrunsuccesscontrol *success;
    ppidgrouperror *error;
};

#endif // LAUNCHPPIDCHECKCONTROL_H
