#ifndef STUDENTEDITQUESTIONSCONFIRMATIONCONTROL_H
#define STUDENTEDITQUESTIONSCONFIRMATIONCONTROL_H
#include "Storage.h"
#include <QVector>
#include <QString>
#include <vector>
#include <string>

class studenteditquestionsconfirmationcontrol
{
public:
    studenteditquestionsconfirmationcontrol(QString, QVector<QString>);

private:
    Storage store;
    string id;
    vector<string> qs;

};

#endif // STUDENTEDITQUESTIONSCONFIRMATIONCONTROL_H
