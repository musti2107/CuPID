#ifndef STORAGE_H
#define STORAGE_H

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <QtSql>
#include <vector>
#include <sstream>
#include <QTextStream>
#include <QDebug>
#include <QTextStream>
#include "Project.h"
#include "Student.h"

using namespace std;

class Storage
{
 public:
  Storage();
  ~Storage();
  int registerStudent(string, string, vector<string>&); //tested and true
  int projectList(vector<Project*>&);
  int studentProjReg(string, string); //tested and true
  int studentLogin(string); 
  int getProfile(string, vector<string>&);
  int getStuProjs(string, vector<Project*>&);
  int getSelectProjs(vector<int>&, vector<Project*>&);
  int getProjStuds(string, vector<Student*>&);
  int getSelectStus(vector<string>&, vector<Student*>&);
  int addProject(string, string); //tested and true
  int editProject(string, string, string); //tested and true
  //int runPPID(int);
 int editProfile(string, vector<string>&);
 int setPPIDInfo(string, string, string, string, string);
 int getPPIDInfo(vector<int>&);
 void close();

 
 private:
  string stuNum;
  string stuName;
  string statement;
  QSqlDatabase db;
  string sql;
  //vector<int>& profile;
  string projName;
  string projDesc;
  //sqlite3 *db;
  char *errMsg;
  string name;
  QSqlQuery *query;
  bool check;
  int rc;
  QString s;
  vector<int>::iterator it;

};
#endif
