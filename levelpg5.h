#ifndef LEVELPG5_H
#define LEVELPG5_H

#include <QWidget>

namespace Ui {
class levelpg5;
}

class levelpg5 : public QWidget
{
    Q_OBJECT

public:
    explicit levelpg5(QWidget *parent = nullptr);
    ~levelpg5();

private:
    Ui::levelpg5 *ui;
};

#endif // LEVELPG5_H
