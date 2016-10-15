#ifndef STUDENTVIEWPROJECTCONTROL_H
#define STUDENTVIEWPROJECTCONTROL_H
#include <QString>
#include <QVector>
#include "studentviewproject.h"
#include "Storage.h"
#include "studentstoragefacade.h"

class studentviewprojectcontrol
{
public:
    studentviewprojectcontrol(QString);
    ~studentviewprojectcontrol();
    void show();
    void getprojectInfo();

private:

    studentviewproject *stuviewproject;
   // QVector<QString> projects;
    studentstoragefacade store;
    //Storage store;
    vector<Project*> projects;
    QString name;

};

#endif // STUDENTVIEWPROJECTCONTROL_H
