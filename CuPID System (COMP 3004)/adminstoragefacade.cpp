#include "adminstoragefacade.h"
#include "string.h"

adminstoragefacade::adminstoragefacade()
{}

int adminstoragefacade::addProject(string s,string q){
    int check2 = store.addProject(s,q);
    return check2;
}

int adminstoragefacade::editProject(string a, string b, string c){
    int check1 = store.editProject(a, b, c);
    return check1;
}

int adminstoragefacade::projectList(vector<Project*>& p){
    int check = store.projectList(p);
    return check;

}

int adminstoragefacade::getProjStuds(string pid, vector<Student*>& p){
    int check = store.getProjStuds(pid, p);
    return check;
}

int adminstoragefacade::setPPIDInfo(string gs, string gr, string p, string gp, string m)
{
    int check = store.setPPIDInfo(gs,gr,p,gp,m);
    return check;
}

int adminstoragefacade::getPPIDInfo(vector<int> & p)
{
    int check = store.getPPIDInfo(p);
    return check;
}
