#ifndef LEVEL46_H
#define LEVEL46_H

#include <QWidget>

namespace Ui {
class level46;
}

class level46 : public QWidget
{
    Q_OBJECT

public:
    explicit level46(QWidget *parent = nullptr);
    ~level46();

private:
    Ui::level46 *ui;
};

#endif // LEVEL46_H
