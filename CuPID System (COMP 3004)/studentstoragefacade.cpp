#include "studentstoragefacade.h"

studentstoragefacade::studentstoragefacade()
{
}

int studentstoragefacade::editProfile(string s, vector<string> & q){
    int check = store.editProfile(s,q);
    return check;
}

int studentstoragefacade::registerStudent(string n, string s, vector<string> & q){
    int check1 = store.registerStudent(n,s,q);
    return check1;
}

int studentstoragefacade::getProfile(string s, vector<string> & q){
    int check2 = store.getProfile(s,q);
    return check2;
}

int studentstoragefacade::studentLogin (string s){
    int check3 = store.studentLogin(s);
    return check3;
}

int studentstoragefacade::studentProjReg(string a, string b){
    int check4 = store.studentProjReg(a,b);
    return check4;
}

int studentstoragefacade::projectList(vector<Project *> & q){
    int check5 = store.projectList(q);
    return check5;
}

int studentstoragefacade::getStuProjs(string s, vector<Project *> &p){
    int check6 = store.getStuProjs(s, p);
    return check6;
}

void studentstoragefacade::close(){
    store.close();
}
