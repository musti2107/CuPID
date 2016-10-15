#ifndef STUDENTENROLLEDPROJECTS_H
#define STUDENTENROLLEDPROJECTS_H

#include <QDialog>
#include <vector>
#include "Project.h"

namespace Ui {
class studentenrolledprojects;
}

class studentenrolledprojects : public QDialog
{
    Q_OBJECT

public:
    explicit studentenrolledprojects(QWidget *parent = 0);
    ~studentenrolledprojects();
    void populate(QString a, QString b, QString c);

private slots:
    void on_pushButton_clicked();

private:
    Ui::studentenrolledprojects *ui;
    vector<Project*> projects;
    QString a;
};

#endif // STUDENTENROLLEDPROJECTS_H
