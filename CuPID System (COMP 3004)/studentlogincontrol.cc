#include "studentlogincontrol.h"
//#include "Storage.h"
#include "loginerror.h"
#include "QTextStream"


studentlogincontrol::studentlogincontrol(QString stuid)
{

    // add storage control here! get the student with the ID

   stuloggedin = new studentloggedin;

   id = stuid;


   int check = s.studentLogin(stuid.toStdString());
   if (check==0){
       stuloggedin->setId(id);
       s.getStuProjs(id.toStdString(), projects);

       stuloggedin->show();


   }
   else if (check == 1) {


      loginer= new loginerror();

      loginer->show();


   }


}

//int studentlogincontrol::confirmation(){}

void studentlogincontrol::show(){

}
