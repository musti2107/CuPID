#ifndef STUDENTPROJREGISTRATIONCONTROL_H
#define STUDENTPROJREGISTRATIONCONTROL_H
#include <QString>
//#include <QVector>
#include "Storage.h"
#include "studentprojectregisteringerror.h"
#include "studentregisteringprojectsuccess.h"
#include "studentstoragefacade.h"

class studentprojregistrationcontrol
{
public:
    studentprojregistrationcontrol(QString, QString);
    void setStudentId(QString);
    void setProjId(QString);
private:
   QString studentid; 
   QString projId; 
   studentstoragefacade s;
   //Storage s;
   studentregisteringprojectsuccess *stuprojsuccess;
   studentprojectregisteringerror *stuprojerror;
};

#endif // STUDENTPROJREGISTRATIONCONTROL_H
