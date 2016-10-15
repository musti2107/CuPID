#ifndef STUDENTENROLLEDPROJECTSCONTROL_H
#define STUDENTENROLLEDPROJECTSCONTROL_H

#include "studentstoragefacade.h"
#include "studentenrolledprojects.h"
#include <vector>
#include "Project.h"
#include <QString>


class studentenrolledprojectscontrol
{
public:
    studentenrolledprojectscontrol(QString);
private:
    studentstoragefacade store;
    studentenrolledprojects *stuproj;
    vector<Project*> projects;
    QString id;

};

#endif // STUDENTENROLLEDPROJECTSCONTROL_H
