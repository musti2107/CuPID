#ifndef ADMINSTORAGEFACADE_H
#define ADMINSTORAGEFACADE_H
#include "Storage.h"
#include <vector>
#include <Student.h>

class adminstoragefacade
{
public:
    adminstoragefacade();
    int projectList(vector<Project*>&);
    int addProject(string, string); //tested and true
    int editProject(string, string, string); //tested and true
    int getProjStuds(string, vector<Student*>&);
    int setPPIDInfo(string, string, string, string, string);
    int getPPIDInfo(vector<int>&);
private:
    Storage store;
};

#endif // ADMINSTORAGEFACADE_H
