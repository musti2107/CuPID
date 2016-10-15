#ifndef EDITPROJECT_H
#define EDITPROJECT_H

#include <QWidget>
#include <QString>
#include "editprojectconfirmationcontrol.h"

namespace Ui {
class editproject;
}

class editproject : public QWidget
{
    Q_OBJECT

public:
    explicit editproject(QWidget *parent = 0);
    ~editproject();
    void setDescription(QString);
    void setTitle(QString);
    void setId(QString);

private slots:


    void on_pushButton_clicked();

private:
    Ui::editproject *ui;
    QString description ;
    QString title;
    QString id;
    editprojectconfirmationcontrol *editprojconfirmcontrol;
};

#endif // EDITPROJECT_H
