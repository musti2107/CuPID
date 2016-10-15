#ifndef ERRORPPID_H
#define ERRORPPID_H

#include <QDialog>

namespace Ui {
class errorppid;
}

class errorppid : public QDialog
{
    Q_OBJECT

public:
    explicit errorppid(QWidget *parent = 0);
    ~errorppid();

private slots:
    void on_pushButton_clicked();

private:
    Ui::errorppid *ui;
};

#endif // ERRORPPID_H
