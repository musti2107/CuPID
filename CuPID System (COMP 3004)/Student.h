
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>
//#include "Project.h"



using namespace std;

class Student
{
  public:
    Student(string, int, int, int, int, int, int, int , int , int);
    Student(const Student &obj);
    ~Student();
    string getId();
    string getName();
    void setName(string);
    int getFS1();
    int getFS2();
    int getFS3();
    int getFS4();
    int getS1();
    int getS2();
    int getS3();
    int getS4();
    void setCheck();
    int getCheck();

  private:
    string      firstName;
    string        id;
    //personal scores
    int FS1;
    int FS2;
    int FS3;
    int FS4;
    //partner scores
    int S1;
    int S2;
    int S3;
    int S4;
    int check;
    int *ptr;
  
};

#endif

