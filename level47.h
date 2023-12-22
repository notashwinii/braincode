#ifndef LEVEL47_H
#define LEVEL47_H

#include <QWidget>

namespace Ui {
class level47;
}

class level47 : public QWidget
{
    Q_OBJECT

public:
    explicit level47(QWidget *parent = nullptr);
    ~level47();

private:
    Ui::level47 *ui;
};

#endif // LEVEL47_H
