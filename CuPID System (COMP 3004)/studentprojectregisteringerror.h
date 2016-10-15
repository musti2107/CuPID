#ifndef STUDENTPROJECTREGISTERINGERROR_H
#define STUDENTPROJECTREGISTERINGERROR_H

#include <QDialog>

namespace Ui {
class studentprojectregisteringerror;
}

class studentprojectregisteringerror : public QDialog
{
    Q_OBJECT

public:
    explicit studentprojectregisteringerror(QWidget *parent = 0);
    ~studentprojectregisteringerror();

private slots:
    void on_pushButton_clicked();

private:
    Ui::studentprojectregisteringerror *ui;
};

#endif // STUDENTPROJECTREGISTERINGERROR_H
