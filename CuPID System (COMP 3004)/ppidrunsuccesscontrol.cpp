#include "ppidrunsuccesscontrol.h"
//#include "errorppid.h"

ppidrunsuccesscontrol::ppidrunsuccesscontrol(string p)
{   projectid = p;
    cout<<"PROJECT ID "<<projectid<<endl;
    success = new ppidrunsuccess();
    success->setProjectId(projectid);
    int check = store.getPPIDInfo(ppiddetails);
    if (check == 1){
        cout << "problem with getppidinfo" << endl;
    }
    vector<Student*> test;
    cout << "pulling students from test" << endl;
    int check2 = store.getProjStuds(projectid, test);
    if(check2 == 1){
        cout << "we have a problem in ppidrunsuccesscontrol" << endl;
        e = new errorppid();
        e->show();

       // return;

    } else{
        success->setPPIddetails(ppiddetails);
        success->run();
        success->show();
    }


}
