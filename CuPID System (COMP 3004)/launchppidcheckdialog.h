#ifndef LAUNCHPPIDCHECKDIALOG_H
#define LAUNCHPPIDCHECKDIALOG_H
#include "ppidrunsuccesscontrol.h"
#include <QDialog>
#include"string.h"

namespace Ui {
class launchppidcheckdialog;
}

class launchppidcheckdialog : public QDialog
{
    Q_OBJECT

public:
    explicit launchppidcheckdialog(QWidget *parent = 0);
    ~launchppidcheckdialog();
    void setProjid(string);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::launchppidcheckdialog *ui;
    ppidrunsuccesscontrol *success;
    string projid;
};

#endif // LAUNCHPPIDCHECKDIALOG_H
