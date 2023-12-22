#ifndef LEVEL11_H
#define LEVEL11_H

#include <QWidget>

namespace Ui {
class level11;
}

class level11 : public QWidget
{
    Q_OBJECT

public:
    explicit level11(QWidget *parent = nullptr);
    ~level11();

private:
    Ui::level11 *ui;
};

#endif // LEVEL11_H
