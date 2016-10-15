#ifndef EDITPROJECTCONFIRMATION_H
#define EDITPROJECTCONFIRMATION_H

#include <QDialog>

namespace Ui {
class editprojectconfirmation;
}

class editprojectconfirmation : public QDialog
{
    Q_OBJECT

public:
    explicit editprojectconfirmation(QWidget *parent = 0);
    ~editprojectconfirmation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::editprojectconfirmation *ui;
};

#endif // EDITPROJECTCONFIRMATION_H
