#ifndef LEVEL13_H
#define LEVEL13_H

#include <QWidget>

namespace Ui {
class level13;
}

class level13 : public QWidget
{
    Q_OBJECT

public:
    explicit level13(QWidget *parent = nullptr);
    ~level13();

private:
    Ui::level13 *ui;
};

#endif // LEVEL13_H
