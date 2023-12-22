#ifndef LEVEL32_H
#define LEVEL32_H

#include <QWidget>

namespace Ui {
class level32;
}

class level32 : public QWidget
{
    Q_OBJECT

public:
    explicit level32(QWidget *parent = nullptr);
    ~level32();

private:
    Ui::level32 *ui;
};

#endif // LEVEL32_H
