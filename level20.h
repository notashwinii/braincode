#ifndef LEVEL20_H
#define LEVEL20_H

#include <QWidget>

namespace Ui {
class level20;
}

class level20 : public QWidget
{
    Q_OBJECT

public:
    explicit level20(QWidget *parent = nullptr);
    ~level20();

private:
    Ui::level20 *ui;
};

#endif // LEVEL20_H
