#ifndef STUDENTEDITQUESTIONSCONTROL_H
#define STUDENTEDITQUESTIONSCONTROL_H
#include "QString"
#include "studenteditquestions.h"
#include "studentstoragefacade.h"
#include "Storage.h"
#include <vector>
#include <string>

using namespace std;

class studenteditquestionscontrol
{
public:
    studenteditquestionscontrol(QString);
    ~studenteditquestionscontrol();
    void show();
    void getQs();
private:
    QString id;
    studenteditquestions *stueditquestions;
    std::vector<std::string> questions;
    QVector<QString> vs;
    //Storage store;
    studentstoragefacade store;

};

#endif // STUDENTEDITQUESTIONSCONTROL_H
