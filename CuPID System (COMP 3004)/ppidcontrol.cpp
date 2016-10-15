#include "ppidcontrol.h"

PPIDcontrol::PPIDcontrol()
{
    ppid = new PPID();
}

void PPIDcontrol::show(){
    ppid->show();
}
