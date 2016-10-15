#ifndef PPID_H
#define PPID_H

#include <QMainWindow>
#include "ppideditedcontrol.h"

namespace Ui {
class PPID;
}

class PPID : public QMainWindow
{
    Q_OBJECT

public:
    explicit PPID(QWidget *parent = 0);
    ~PPID();
    int getA();
    int getB();
    int getC();
    int getD();
    int getE();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::PPID *ui;
    QString a;
    QString b;
    QString c;
    QString d;
    QString e;
    ppideditedcontrol *ppidedit;
};

#endif // PPID_H
