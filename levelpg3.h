#ifndef LEVELPG3_H
#define LEVELPG3_H

#include <QWidget>

namespace Ui {
class levelpg3;
}

class levelpg3 : public QWidget
{
    Q_OBJECT

public:
    explicit levelpg3(QWidget *parent = nullptr);
    ~levelpg3();

private:
    Ui::levelpg3 *ui;
};

#endif // LEVELPG3_H
