#include "studenteditquestionscontrol.h"
#include <QVector>
#include <string>

#include <QTextStream>
#include <QtDebug>
studenteditquestionscontrol::studenteditquestionscontrol(QString s)
{

    id =s;

    store.getProfile(id.toStdString(), questions);
    for (unsigned int i = 0; i< questions.size(); i++){

       vs.append(QString::fromStdString(questions.at(i)));




     //  qDebug () << "this is what VS HAs at" << i;

       //qDebug () << vs.at(i);
    }
    store.close();


}

studenteditquestionscontrol::~studenteditquestionscontrol(){
    questions.clear();
    vs.clear();
}

void studenteditquestionscontrol::getQs(){

}

void studenteditquestionscontrol::show(){



    stueditquestions = new studenteditquestions();
    stueditquestions->setQs(vs);
    stueditquestions->setstudentid(id);
    stueditquestions->populate();

    stueditquestions->show();
}
