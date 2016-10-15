#ifndef GROUP_H
#define GROUP_H
#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

using namespace std;

class Group{

public:
    Group(int);
    void addStudent(Student*);
    int getPS1();
    int getPS2();
    int getPS3();
    int getPS4();
    int getS1();
    int getS2();
    int getS3();
    int getS4();
    int getSize();
    int getSpotsLeft();
    void getStudents(vector<Student*>&);
    void overrideSpots(Student*);


private:
    int PS1;
    int PS2;
    int PS3;
    int PS4;
    int S1;
    int S2;
    int S3;
    int S4;
    int size;
    int spotsLeft;
    vector<Student*> students;
    vector<Student*>::iterator myItr;



};

#endif // GROUP_H
