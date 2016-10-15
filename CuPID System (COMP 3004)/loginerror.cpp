#include "loginerror.h"
#include "ui_loginerror.h"

loginerror::loginerror(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginerror)
{
    ui->setupUi(this);
    this->move(300,300);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_2->setPixmap(pix4);
    foreach (QWidget *widget, QApplication::topLevelWidgets()){
            if(widget->objectName() == "MainWindow"){

                widget->setVisible(true);
            }

    }
}

loginerror::~loginerror()
{
    delete ui;
}
