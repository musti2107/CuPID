#ifndef ADDPROJECTCONFIRMATIONCONTROL_H
#define ADDPROJECTCONFIRMATIONCONTROL_H
#include <string>
#include <QString>
#include "Storage.h"
#include "addprojectconfirmation.h"
#include "adminstoragefacade.h"


class addprojectconfirmationcontrol
{
public:
    addprojectconfirmationcontrol(QString, QString);

private:

    //Storage store;
    adminstoragefacade store;
    addprojectconfirmation *addconfirm;



};

#endif // ADDPROJECTCONFIRMATIONCONTROL_H
