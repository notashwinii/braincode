#ifndef LEVEL44_H
#define LEVEL44_H

#include <QWidget>

namespace Ui {
class level44;
}

class level44 : public QWidget
{
    Q_OBJECT

public:
    explicit level44(QWidget *parent = nullptr);
    ~level44();

private:
    Ui::level44 *ui;
};

#endif // LEVEL44_H
