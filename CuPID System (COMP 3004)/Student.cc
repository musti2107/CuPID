

#include "Student.h"


Student::Student(string fn, int num, int a, int b, int c, int d, int e, int f, int g, int h ) 
{
 
  id = num;
  cout <<"id of new created student: " << id << endl;
  firstName = fn;
  cout <<"name of new created student: " << firstName << endl;
  FS1 = a;
  FS2 = b;
  FS3 = c;
  FS4 = d;
  S1 = e;
  S2 = f;
  S3 = g;
  S4 = h;
  check = 0;

}

Student::Student(const Student &obj){
    ptr = new int;
    *ptr = *obj.ptr;
}

Student::~Student(){

}

string Student::getId()    { return id; }
string Student::getName() {return firstName;}

void Student::setName(string name) {firstName = name;}

int Student::getFS1(){
	return FS1;
}

int Student::getFS2(){
	return FS2;
}

int Student::getFS3(){
	return FS3;
}

int Student::getFS4(){
	return FS4;
}

int Student::getS1(){
	return S1;
}

int Student::getS2(){
	return S2;
}

int Student::getS3(){
	return S3;
}

int Student::getS4(){
	return S4;
}

void Student::setCheck(){
    check = 1;
}

int Student::getCheck(){
    return check;
}
