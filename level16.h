#ifndef LEVEL16_H
#define LEVEL16_H

#include <QWidget>

namespace Ui {
class level16;
}

class level16 : public QWidget
{
    Q_OBJECT

public:
    explicit level16(QWidget *parent = nullptr);
    ~level16();

private:
    Ui::level16 *ui;
};

#endif // LEVEL16_H
