#include "studenteditquestionsconfirmationcontrol.h"
#include "Storage.h"

studenteditquestionsconfirmationcontrol::studenteditquestionsconfirmationcontrol(QString i,QVector<QString> q)
{   QVector<QString> questions = q;
    for (int i =0; i<questions.size(); i++){
        qs.push_back(questions.at(i).toStdString());
    }
    id = i.toStdString();
    string test = "t";
    vector<string>tester;

    int check = store.editP(test,tester);
    //if (check ==1){}
}
