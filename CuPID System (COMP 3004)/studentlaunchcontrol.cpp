#include "studentlaunchcontrol.h"

studentlaunchcontrol::studentlaunchcontrol()
{
    sturegis = new studentregistering();
    stulogin = new studentlogin();
}

void studentlaunchcontrol::loginShow()
{
    stulogin->show();
}

void studentlaunchcontrol::regisShow()
{
    sturegis->show();
}
