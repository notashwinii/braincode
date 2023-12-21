#ifndef LEVELPG4_H
#define LEVELPG4_H

#include <QWidget>

namespace Ui {
class levelpg4;
}

class levelpg4 : public QWidget
{
    Q_OBJECT

public:
    explicit levelpg4(QWidget *parent = nullptr);
    ~levelpg4();

private:
    Ui::levelpg4 *ui;
};

#endif // LEVELPG4_H
