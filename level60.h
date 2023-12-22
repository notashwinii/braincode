#ifndef LEVEL60_H
#define LEVEL60_H

#include <QWidget>

namespace Ui {
class level60;
}

class level60 : public QWidget
{
    Q_OBJECT

public:
    explicit level60(QWidget *parent = nullptr);
    ~level60();

private:
    Ui::level60 *ui;
};

#endif // LEVEL60_H
