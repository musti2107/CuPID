#ifndef STUDENTPROFILEEDITERROR_H
#define STUDENTPROFILEEDITERROR_H

#include <QDialog>

namespace Ui {
class studentprofileediterror;
}

class studentprofileediterror : public QDialog
{
    Q_OBJECT

public:
    explicit studentprofileediterror(QWidget *parent = 0);
    ~studentprofileediterror();

private:
    Ui::studentprofileediterror *ui;
};

#endif // STUDENTPROFILEEDITERROR_H
