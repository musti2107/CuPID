#ifndef PROJECTDOESNOTEXIST_H
#define PROJECTDOESNOTEXIST_H

#include <QWidget>

namespace Ui {
class projectdoesnotexist;
}

class projectdoesnotexist : public QWidget
{
    Q_OBJECT

public:
    explicit projectdoesnotexist(QWidget *parent = 0);
    ~projectdoesnotexist();

private:
    Ui::projectdoesnotexist *ui;
};

#endif // PROJECTDOESNOTEXIST_H
