#include "Admin.h"

Admin::Admin(){}
Admin::~Admin(){
    adprojects.clear();
}

void Admin::addProject(Project* p){
	adprojects.push_back(p);
}

void Admin::editProject(Project* p, string d, string n, int id){

    p->setId(id);
    p->setName(n);
	p->setDescription(d);
	
}
