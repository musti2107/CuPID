#ifndef STUDENTLOGIN_H
#define STUDENTLOGIN_H
#include "studentlogincontrol.h"

#include <QString>

#include <QWidget>

namespace Ui {
class studentlogin;
}

class studentlogin : public QWidget
{
    Q_OBJECT

public:
    explicit studentlogin(QWidget *parent = 0);
    ~studentlogin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::studentlogin *ui;
    studentlogincontrol *stulogincontrol;
    QString stuid;
};

#endif // STUDENTLOGIN_H
