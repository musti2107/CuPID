#ifndef STUDENTREGISTERINGERROR_H
#define STUDENTREGISTERINGERROR_H

#include <QDialog>

namespace Ui {
class studentregisteringerror;
}

class studentregisteringerror : public QDialog
{
    Q_OBJECT

public:
    explicit studentregisteringerror(QWidget *parent = 0);
    ~studentregisteringerror();

private slots:
    void on_pushButton_clicked();

private:
    Ui::studentregisteringerror *ui;
};

#endif // STUDENTREGISTERINGERROR_H
