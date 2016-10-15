
#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <string>
#include <vector>
#include "Project.h"


using namespace std;

class Admin 
{	
	public :
	Admin();
    ~Admin();
    void editProject(Project*, string, string , int);
	void addProject(Project*);
	private:
	vector<Project*> adprojects;
};

#endif
