#ifndef PPIDRUNCONTROL_H
#define PPIDRUNCONTROL_H
#include <vector>
#include "adminstoragefacade.h"
#include "Student.h"
#include "Group.h"

using namespace std;

class PPIDrunControl{

public:
    PPIDrunControl(string, int, int, int, int, int);
    void runPPID(vector<Group*>&);

private:
    vector<Student*> stus; //vector of students received from storage
    vector<Student*>::iterator myItr; //iterator for stus
    vector<Group*> groups; //will hold the groups
    vector<Group*>::iterator gItr; //iterator for groups
    vector<Student*> compStus; //list of all compatible students
    vector<Student*> level1;
    vector<Student*> level2;
    vector<Student*> level3;
    vector<Student*> level4;
    vector<Student*>::iterator lItr;
    adminstoragefacade store;

    string pid;
    int groupSize; //get A from PPID
    int gradesPriority; //get B from PPID
    int miscPriority; //get C from PPID
    int groupPriority; //get D from PPID
    int personalPriority; //get E from PPID
    int studentsAllocated;
    Group *grouping;
    int prioritySet; //which set currently being used
    int range; //range allowed for students to fit into
    int groupsNeeded; //groups needed to fit all students
    int groupsMade; //groups that are created
    void runGradesPriority(vector<Student*>&);
    void runMiscPriority(vector<Student*>&);
    void runGroupPriority(vector<Student*>&);
    void runPersonalPriority(vector<Student*>&);

};

#endif // PPIDRUNCONTROL_H
