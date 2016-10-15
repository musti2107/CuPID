#ifndef STUDENTREGISTERINGPROJECTSUCCESS_H
#define STUDENTREGISTERINGPROJECTSUCCESS_H

#include <QDialog>

namespace Ui {
class studentregisteringprojectsuccess;
}

class studentregisteringprojectsuccess : public QDialog
{
    Q_OBJECT

public:
    explicit studentregisteringprojectsuccess(QWidget *parent = 0);
    ~studentregisteringprojectsuccess();

private slots:
    void on_pushButton_clicked();

private:
    Ui::studentregisteringprojectsuccess *ui;
};

#endif // STUDENTREGISTERINGPROJECTSUCCESS_H
