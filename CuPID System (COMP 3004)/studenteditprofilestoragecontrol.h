#ifndef STUDENTEDITPROFILESTORAGECONTROL_H
#define STUDENTEDITPROFILESTORAGECONTROL_H
#include <QString>
#include <vector>
#include "Storage.h"
#include "studentprofileediterror.h"
#include "studentprofileeditsuccess.h"
#include "studentstoragefacade.h"
#include <QVector>


class studenteditprofilestoragecontrol{

public:
    studenteditprofilestoragecontrol();
    int confirmit(QString, QVector<QString>);

private:
    QString studentid;
    //Storage s;
    studentstoragefacade s;
    studentprofileediterror *error;
    studentprofileeditsuccess *success;

};

#endif // EDITPROJECTCONTROL_H
