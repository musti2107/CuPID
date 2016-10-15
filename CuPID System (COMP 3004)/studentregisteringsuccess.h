#ifndef STUDENTREGISTERINGSUCCESS_H
#define STUDENTREGISTERINGSUCCESS_H

#include <QDialog>

namespace Ui {
class studentregisteringsuccess;
}

class studentregisteringsuccess : public QDialog
{
    Q_OBJECT

public:
    explicit studentregisteringsuccess(QWidget *parent = 0);
    ~studentregisteringsuccess();

private slots:
    void on_pushButton_clicked();

private:
    Ui::studentregisteringsuccess *ui;
};

#endif // STUDENTREGISTERINGSUCCESS_H
