#ifndef PPIDRUNSUCCESS_H
#define PPIDRUNSUCCESS_H
#include "PPIDrunControl.h"
#include <QDialog>
#include <vector>
#include "string.h"
#include <QVector>
#include <QString>
#include "Group.h"
#include "Student.h"


namespace Ui {
class ppidrunsuccess;
}

class ppidrunsuccess : public QDialog
{
    Q_OBJECT

public:
    explicit ppidrunsuccess(QWidget *parent = 0);
    ~ppidrunsuccess();
    void setProjectId(string);
    void setPPIddetails(vector<int>&);
    void run();


private slots:
    void on_pushButton_clicked();

private:
    Ui::ppidrunsuccess *ui;
    PPIDrunControl *test;
    vector<Group*> groups;
    vector<Student*>::iterator myItr;
    vector<Group*>::iterator gItr;
    string projectid;
    vector<int> ppiddetails;
    int groupSize;
    int grade;
    int personal;
    int group;
    int misc;

};

#endif // PPIDRUNSUCCESS_H
