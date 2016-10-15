#ifndef STUDENTSTORAGEFACADE_H
#define STUDENTSTORAGEFACADE_H
#include "string.h"
#include <vector>
#include "Storage.h"

class studentstoragefacade
{
public:
    studentstoragefacade();
    int registerStudent(string, string, vector<string>&); //tested and true
    int projectList(vector<Project*>&);
    int studentProjReg(string, string); //tested and true
    int studentLogin(string);
    int getProfile(string, vector<string>&);
    int getStuProjs(string, vector<Project*>&);
    int editProfile(string, vector<string>&);
    void close();


private:
    Storage store;


};

#endif // STUDENTSTORAGEFACADE_H
