#ifndef LEVEL22_H
#define LEVEL22_H

#include <QWidget>

namespace Ui {
class level22;
}

class level22 : public QWidget
{
    Q_OBJECT

public:
    explicit level22(QWidget *parent = nullptr);
    ~level22();

private:
    Ui::level22 *ui;
};

#endif // LEVEL22_H
