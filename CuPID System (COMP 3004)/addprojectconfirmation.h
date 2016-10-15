#ifndef ADDPROJECTCONFIRMATION_H
#define ADDPROJECTCONFIRMATION_H

#include <QDialog>

namespace Ui {
class addprojectconfirmation;
}

class addprojectconfirmation : public QDialog
{
    Q_OBJECT

public:
    explicit addprojectconfirmation(QWidget *parent = 0);
    ~addprojectconfirmation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addprojectconfirmation *ui;
};

#endif // ADDPROJECTCONFIRMATION_H
