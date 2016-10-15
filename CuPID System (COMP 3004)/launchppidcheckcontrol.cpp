#include "launchppidcheckcontrol.h"

launchppidcheckcontrol::launchppidcheckcontrol(string id)
{
    projid = id;
    cout<<"PROJ_ID from launchppidcontrolcheck "<<projid<<endl;
    store = new adminstoragefacade();

    int check = store->getProjStuds(projid,students);
    cout<<"Check1 from launchppidcheckcontrol "<<check<<endl;


    cout<<"Studentlist in Project from launchppidcheckcontrol "<<students.size()<<endl;

    int check2 = store->getPPIDInfo(ppidinfo);
    cout<<"Check2 from launchppidcheckcontrol "<<check2<<endl;

    cout<<"GroupSize from launchppidcheckcontrol "<<ppidinfo.at(0)<<endl;

    if(students.size() % ppidinfo.at(0) != 0) {
    cout<<"IN IF STATEMENT !"<<endl;
    dialog = new launchppidcheckdialog();
    dialog->setProjid(projid);
    dialog->show();
    }else{
    success = new ppidrunsuccesscontrol(projid);
    }
}
