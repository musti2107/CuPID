#ifndef PPIDGROUPERROR_H
#define PPIDGROUPERROR_H

#include <QDialog>

namespace Ui {
class ppidgrouperror;
}

class ppidgrouperror : public QDialog
{
    Q_OBJECT

public:
    explicit ppidgrouperror(QWidget *parent = 0);
    ~ppidgrouperror();

private:
    Ui::ppidgrouperror *ui;
};

#endif // PPIDGROUPERROR_H
