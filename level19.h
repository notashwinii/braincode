#ifndef LEVEL19_H
#define LEVEL19_H

#include <QWidget>

namespace Ui {
class level19;
}

class level19 : public QWidget
{
    Q_OBJECT

public:
    explicit level19(QWidget *parent = nullptr);
    ~level19();

private:
    Ui::level19 *ui;
};

#endif // LEVEL19_H
