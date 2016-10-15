#include "Group.h"

Group::Group(int s){
    size = s;
    spotsLeft = s;
    PS1 = 0;
    PS2 = 0;
    PS3 = 0;
    PS4 = 0;
    S1 = 0;
    S2 = 0;
    S3 = 0;
    S4 = 0;
}

void Group::overrideSpots(Student *stu){
    students.push_back(stu);
}

void Group::addStudent(Student *stu){

    if(spotsLeft > 0){
        students.push_back(stu);
        spotsLeft--;
    }

}

int Group::getPS1(){

    for(myItr = students.begin(); myItr != students.end(); myItr++){

        PS1 = PS1 + (*myItr)->getFS1();
    }
    int temp;
    temp = PS1;
    PS1 = 0;
    if(spotsLeft == size){
        return temp;
    } else{
        return (temp/(size-spotsLeft));
    }
}

int Group::getPS2(){

    for(myItr = students.begin(); myItr != students.end(); myItr++){

        PS2 = PS2 + (*myItr)->getFS2();
    }
    int temp;
    temp = PS2;
    PS2 = 0;
    if(spotsLeft == size){
        return temp;
    } else{
        return (temp/(size-spotsLeft));
    }
}

int Group::getPS3(){

    for(myItr = students.begin(); myItr != students.end(); myItr++){

        PS3 = PS3 + (*myItr)->getFS3();
    }
    int temp;
    temp = PS3;
    PS3 = 0;
    if(spotsLeft == size){
        return temp;
    } else{
        return (temp/(size-spotsLeft));
    }
}

int Group::getPS4(){

    for(myItr = students.begin(); myItr != students.end(); myItr++){

        PS4 = PS4 + (*myItr)->getFS4();
    }
    int temp;
    temp = PS4;
    PS4 = 0;
    if(spotsLeft == size){
        return temp;
    } else{
        return (temp/(size-spotsLeft));
    }

}

int Group::getS1(){

    for(myItr = students.begin(); myItr != students.end(); myItr++){
        //cout << "s1: " << S1 << endl;

        S1 = S1 + (*myItr)->getS1();
        //cout << "s1: " << S1 << endl;
    }
    int temp;
    temp = S1;
    S1 = 0;
    if(spotsLeft == size){
        return temp;
    } else{
        return (temp/(size-spotsLeft));
    }
}

int Group::getS2(){

    for(myItr = students.begin(); myItr != students.end(); myItr++){

        S2 = S2 + (*myItr)->getS2();
    }
    int temp;
    temp = S2;
    S2 = 0;
    if(spotsLeft == size){
        return temp;
    } else{
        return (temp/(size-spotsLeft));
    }

}

int Group::getS3(){

    for(myItr = students.begin(); myItr != students.end(); myItr++){

        S3 = S3 + (*myItr)->getS3();
    }
    int temp;
    temp = S3;
    S3 = 0;
    if(spotsLeft == size){
        return temp;
    } else{
        return (temp/(size-spotsLeft));
    }
}

int Group::getS4(){

    for(myItr = students.begin(); myItr != students.end(); myItr++){

        S4 = S4 + (*myItr)->getS4();
    }
    int temp;
    temp = S4;
    S4 = 0;
    if(spotsLeft == size){
        return temp;
    } else{
        return (temp/(size-spotsLeft));
    }

}

int Group::getSize(){

    return size;

}

int Group::getSpotsLeft(){

    return spotsLeft;

}

void Group::getStudents(vector<Student *> &s){
    s = students;
}
