#ifndef STUDENTPROFILEEDITSUCCESS_H
#define STUDENTPROFILEEDITSUCCESS_H

#include <QDialog>

namespace Ui {
class studentprofileeditsuccess;
}

class studentprofileeditsuccess : public QDialog
{
    Q_OBJECT

public:
    explicit studentprofileeditsuccess(QWidget *parent = 0);
    ~studentprofileeditsuccess();

private slots:
    void on_pushButton_clicked();

private:
    Ui::studentprofileeditsuccess *ui;
};

#endif // STUDENTPROFILEEDITSUCCESS_H
