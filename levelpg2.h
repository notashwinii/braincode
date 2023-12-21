#ifndef LEVELPG2_H
#define LEVELPG2_H

#include <QMainWindow>

namespace Ui {
class levelpg2;
}

class levelpg2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit levelpg2(QWidget *parent = nullptr);
    ~levelpg2();

private:
    Ui::levelpg2 *ui;
};

#endif // LEVELPG2_H
