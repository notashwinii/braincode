#ifndef LEVEL51_H
#define LEVEL51_H

#include <QWidget>

namespace Ui {
class level51;
}

class level51 : public QWidget
{
    Q_OBJECT

public:
    explicit level51(QWidget *parent = nullptr);
    ~level51();

private:
    Ui::level51 *ui;
};

#endif // LEVEL51_H
