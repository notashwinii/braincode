#ifndef LEVEL14_H
#define LEVEL14_H

#include <QWidget>

namespace Ui {
class level14;
}

class level14 : public QWidget
{
    Q_OBJECT

public:
    explicit level14(QWidget *parent = nullptr);
    ~level14();

private:
    Ui::level14 *ui;
};

#endif // LEVEL14_H
