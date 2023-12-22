#ifndef LEVEL59_H
#define LEVEL59_H

#include <QWidget>

namespace Ui {
class level59;
}

class level59 : public QWidget
{
    Q_OBJECT

public:
    explicit level59(QWidget *parent = nullptr);
    ~level59();

private:
    Ui::level59 *ui;
};

#endif // LEVEL59_H
