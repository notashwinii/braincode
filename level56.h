#ifndef LEVEL56_H
#define LEVEL56_H

#include <QWidget>

namespace Ui {
class level56;
}

class level56 : public QWidget
{
    Q_OBJECT

public:
    explicit level56(QWidget *parent = nullptr);
    ~level56();

private:
    Ui::level56 *ui;
};

#endif // LEVEL56_H
