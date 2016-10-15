#include "adminlaunchcontrol.h"

adminlaunchcontrol::adminlaunchcontrol()
{
    admin = new adminloggedin();

}

void adminlaunchcontrol::show(){
    admin->show();
}
