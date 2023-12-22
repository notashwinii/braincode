#ifndef LEVEL10_H
#define LEVEL10_H

#include <QWidget>

namespace Ui {
class level10;
}

class level10 : public QWidget
{
    Q_OBJECT

public:
    explicit level10(QWidget *parent = nullptr);
    ~level10();

private:
    Ui::level10 *ui;
};

#endif // LEVEL10_H
