#ifndef LEVEL1_H
#define LEVEL1_H

#include <QWidget>
#include "level2.h"
namespace Ui {
class level1;
}

class level1 : public QWidget
{
    Q_OBJECT

public:
    explicit level1(QWidget *parent = nullptr);
    ~level1();

private slots:


private:
    Ui::level1 *ui;
    level2 *Level2;

};

#endif // LEVEL1_H
