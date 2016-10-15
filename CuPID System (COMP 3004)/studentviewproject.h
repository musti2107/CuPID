#ifndef STUDENTVIEWPROJECT_H
#define STUDENTVIEWPROJECT_H

#include <QWidget>
#include <QString>
#include <QVector>
#include "studentprojregistrationcontrol.h"
namespace Ui {
class studentviewproject;
}

class studentviewproject : public QWidget
{
    Q_OBJECT

public:
    explicit studentviewproject(QWidget *parent = 0);
    ~studentviewproject();
    void setstuId(QString);
    void setprojects(QVector<QString>);
    void populate(QString s, QString q, QString l);


private slots:
   // void on_pushButton_clicked();

    void on_pushButton_clicked();

    void on_listWidget_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

private:
    Ui::studentviewproject *ui;
    QVector<QString> projects;
    QString stuId;
    studentprojregistrationcontrol *stureg;

};

#endif // STUDENTVIEWPROJECT_H
