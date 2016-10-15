#include "studentprojregistrationcontrol.h"
#include "QTextStream"


studentprojregistrationcontrol::studentprojregistrationcontrol(QString stuid, QString projid)
{
  int i = s.studentProjReg(stuid.toStdString(), projid.toStdString());
  if (i == 0){
      stuprojsuccess = new studentregisteringprojectsuccess();
      stuprojsuccess->show();
   }
  else if (i == 1 ){
      stuprojerror = new studentprojectregisteringerror();
      stuprojerror->show();
  }

}



