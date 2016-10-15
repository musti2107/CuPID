#ifndef VADMINPROJECTVIEW_H
#define VADMINPROJECTVIEW_H
#include <QString>
#include "launchppidcheckcontrol.h"
#include <QWidget>
#include "editprojectcontrol.h"
#include "PPIDrunControl.h"

namespace Ui {
class vadminprojectview;
}

class vadminprojectview : public QWidget
{
    Q_OBJECT

public:
    explicit vadminprojectview(QWidget *parent = 0);
    ~vadminprojectview();
    void populateProjects(QString, QString, QString l);


private slots:
    //void on_pushButton_2_clicked();

    void on_pushButton_2_clicked();



    void on_listWidget_clicked(const QModelIndex &index);

    //void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::vadminprojectview *ui;
    editprojectcontrol *editprojcontrol;
    int id;
    launchppidcheckcontrol *launch;
};

#endif // VADMINPROJECTVIEW_H
