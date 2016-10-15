#include "projectdoesnotexist.h"
#include "ui_projectdoesnotexist.h"

projectdoesnotexist::projectdoesnotexist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::projectdoesnotexist)
{this->move(300,300);
    ui->setupUi(this);
    QPixmap pix4(":/cupidVe/images/dd.jpg");
    ui->label_2->setPixmap(pix4);
}

projectdoesnotexist::~projectdoesnotexist()
{
    delete ui;
}
