#include "Project.h"


Project::Project(string num, string s, string d )
{
  id = num;
  name = s;
  description = d; 
  
  
}

Project::~Project(){

    students.clear();
}

void Project::addStudent(Student* student) {
	students.push_back(student);
}
string Project::getDescription()    { return description; }
string Project::getName()    { return name; }
string Project::getProjectId() {return id;}
void Project::setId(int i){id = i;}
void Project::setDescription(string d){description = d;}
void Project::setName(string n){name = n;}


