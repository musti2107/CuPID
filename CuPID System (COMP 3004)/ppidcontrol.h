#ifndef PPIDCONTROL_H
#define PPIDCONTROL_H

#include "ppid.h"

class PPIDcontrol
{
public:
    PPIDcontrol();
    void show();
private:
    PPID *ppid;
};

#endif // PPIDCONTROL_H
