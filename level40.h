#ifndef LEVEL40_H
#define LEVEL40_H

#include <QWidget>

namespace Ui {
class level40;
}

class level40 : public QWidget
{
    Q_OBJECT

public:
    explicit level40(QWidget *parent = nullptr);
    ~level40();

private:
    Ui::level40 *ui;
};

#endif // LEVEL40_H
