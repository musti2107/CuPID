#ifndef STUDENTREGISTERING_H
#define STUDENTREGISTERING_H

#include <QWidget>
#include "studentregistrationcontrol.h"
#include "studentregisteringerror.h"
#include "studentregisteringsuccess.h"
#include <QString>

#include <QVector>

namespace Ui {
class studentregistering;
}

class studentregistering : public QWidget
{
    Q_OBJECT

public:
    explicit studentregistering(QWidget *parent = 0);
    ~studentregistering();

private slots:
    void on_pushButton_clicked();
  //  void getInfo();
   // QVector<QString> getanswers();


    //void on_comboBox_2_activated(const QString &arg1);

    //void on_comboBox_activated(const QString &arg1);

    void on_pushButton_2_clicked();

private:
    Ui::studentregistering *ui;
    studentregistrationcontrol *registercheck;
    QString name;
    QString id;
    QString q12;
    QString q24;
    QVector<QString> qs;
    studentregisteringerror *error;
    studentregisteringsuccess *sturegissuccess;



};

#endif // STUDENTREGISTERING_H
