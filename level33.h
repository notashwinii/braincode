#ifndef LEVEL33_H
#define LEVEL33_H

#include <QWidget>

namespace Ui {
class level33;
}

class level33 : public QWidget
{
    Q_OBJECT

public:
    explicit level33(QWidget *parent = nullptr);
    ~level33();

private:
    Ui::level33 *ui;
};

#endif // LEVEL33_H
