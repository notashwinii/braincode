#ifndef LEVEL31_H
#define LEVEL31_H

#include <QWidget>

namespace Ui {
class level31;
}

class level31 : public QWidget
{
    Q_OBJECT

public:
    explicit level31(QWidget *parent = nullptr);
    ~level31();

private:
    Ui::level31 *ui;
};

#endif // LEVEL31_H
