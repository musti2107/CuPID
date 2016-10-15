#include "addprojectconfirmationcontrol.h"


addprojectconfirmationcontrol::addprojectconfirmationcontrol(QString s, QString y){
    int check = store.addProject(s.toStdString(), y.toStdString());

    if (check == 0) {
        addconfirm = new addprojectconfirmation();
        addconfirm->show();
    }

}
