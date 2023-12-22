#ifndef LEVEL8_H
#define LEVEL8_H

#include <QWidget>

namespace Ui {
class level8;
}

class level8 : public QWidget
{
    Q_OBJECT

public:
    explicit level8(QWidget *parent = nullptr);
    ~level8();

private:
    Ui::level8 *ui;
};

#endif // LEVEL8_H
