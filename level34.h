#ifndef LEVEL34_H
#define LEVEL34_H

#include <QWidget>

namespace Ui {
class level34;
}

class level34 : public QWidget
{
    Q_OBJECT

public:
    explicit level34(QWidget *parent = nullptr);
    ~level34();

private:
    Ui::level34 *ui;
};

#endif // LEVEL34_H
