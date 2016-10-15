#ifndef ADDPROJECT_H
#define ADDPROJECT_H
#include "addprojectconfirmationcontrol.h"
#include <QWidget>
//#include "Storage.h"

namespace Ui {
class addproject;
}

class addproject : public QWidget
{
    Q_OBJECT

public:
    explicit addproject(QWidget *parent = 0);
    ~addproject();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::addproject *ui;
    addprojectconfirmationcontrol *addprojconfirmcontrol;
    QString title;
    QString description;
    Storage store;
};

#endif // ADDPROJECT_H
