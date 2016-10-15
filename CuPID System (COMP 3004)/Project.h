
#ifndef PROJECT_H
#define PROJECT_H
#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

using namespace std;


class Project
{
	public:
    Project(string, string, string);
    ~Project();
	void addStudent(Student*);
    string  getProjectId();
	string getDescription();
    string getName();
	void setId(int);
	void setDescription(string);
    void setName(string);
    
	private:
	string       description; 
    string 	     name;
    string          id;
	vector<Student*> students; 
  
};

#endif

