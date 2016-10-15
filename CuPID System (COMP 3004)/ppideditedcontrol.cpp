#include "ppideditedcontrol.h"

ppideditedcontrol::ppideditedcontrol(string gz, string gr, string p, string gp, string m)
{
    cout<<gz<<" " <<gr<< " "<<p<< " "<<gp<<" "<<m<<endl;
    int check = store.setPPIDInfo(gz,gr,p,gp,m);
    if (check == 1){
        cout<<"problem in ppideditcontrol or adminstoragefacade" << endl;
    }
}
