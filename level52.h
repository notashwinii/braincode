#ifndef LEVEL52_H
#define LEVEL52_H

#include <QWidget>

namespace Ui {
class level52;
}

class level52 : public QWidget
{
    Q_OBJECT

public:
    explicit level52(QWidget *parent = nullptr);
    ~level52();

private:
    Ui::level52 *ui;
};

#endif // LEVEL52_H
