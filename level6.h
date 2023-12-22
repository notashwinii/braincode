#ifndef LEVEL6_H
#define LEVEL6_H

#include <QWidget>

namespace Ui {
class level6;
}

class level6 : public QWidget
{
    Q_OBJECT

public:
    explicit level6(QWidget *parent = nullptr);
    ~level6();

private:
    Ui::level6 *ui;
};

#endif // LEVEL6_H
