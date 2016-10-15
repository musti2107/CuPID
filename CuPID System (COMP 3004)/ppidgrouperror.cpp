#include "ppidgrouperror.h"
#include "ui_ppidgrouperror.h"

ppidgrouperror::ppidgrouperror(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ppidgrouperror)
{
    ui->setupUi(this);
}

ppidgrouperror::~ppidgrouperror()
{
    delete ui;
}
