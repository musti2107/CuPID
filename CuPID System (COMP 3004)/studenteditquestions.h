#ifndef STUDENTEDITQUESTIONS_H
#define STUDENTEDITQUESTIONS_H

#include <QWidget>
#include <QVector>
#include <studenteditprofilestoragecontrol.h>

namespace Ui {
class studenteditquestions;
}

class studenteditquestions : public QWidget
{
    Q_OBJECT

public:
    explicit studenteditquestions(QWidget *parent = 0);
    ~studenteditquestions();
    void setQs(QVector<QString>);
    void setstudentid(QString);
    void setstudentname(QString);

    void populate();
    //oid setstudentqs(QVector ){vs = v};


private slots:
    void on_pushButton_clicked();

private:
    Ui::studenteditquestions *ui;
       QVector<QString> vs;
       QString stunum;
       QString stuname;
       studenteditprofilestoragecontrol *editcontrol;
       QVector<QString> qs;


};

#endif // STUDENTEDITQUESTIONS_H
