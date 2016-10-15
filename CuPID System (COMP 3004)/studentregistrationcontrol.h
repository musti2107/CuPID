#ifndef STUDENTREGISTRATIONCONTROL_H
#define STUDENTREGISTRATIONCONTROL_H
#include <QString>
#include <QVector>
#include <string.h>
#include "Storage.h"
#include "studentstoragefacade.h"


class studentregistrationcontrol
{
public:
    //studentregistrationcontrol(QString, QString);
    studentregistrationcontrol();
    ~studentregistrationcontrol();
    //void show();
    //void setanswers(QVector<QString>);
    int confirmregistration(QString, QString, QVector<QString>* );
private:
    QVector<QString>answers;
    studentstoragefacade s;
    //Storage s;
    QString studentname;
    QString studentid;

};

#endif // PPIDCONTROL_H
