#ifndef LEVEL21_H
#define LEVEL21_H

#include <QWidget>

namespace Ui {
class level21;
}

class level21 : public QWidget
{
    Q_OBJECT

public:
    explicit level21(QWidget *parent = nullptr);
    ~level21();

private:
    Ui::level21 *ui;
};

#endif // LEVEL21_H
