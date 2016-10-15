#ifndef STUDENTLAUNCHCONTROL_H
#define STUDENTLAUNCHCONTROL_H
#include "studentregistering.h"
#include "studentlogin.h"
#include "studentstoragefacade.h"

class studentlaunchcontrol
{
public:
    studentlaunchcontrol();
    void regisShow();
    void loginShow();
private :
    studentregistering *sturegis;
    studentlogin *stulogin;

};

#endif // STUDENTLAUNCHCONTROL_H
