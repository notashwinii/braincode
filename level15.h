#ifndef LEVEL15_H
#define LEVEL15_H

#include <QWidget>

namespace Ui {
class level15;
}

class level15 : public QWidget
{
    Q_OBJECT

public:
    explicit level15(QWidget *parent = nullptr);
    ~level15();

private:
    Ui::level15 *ui;
};

#endif // LEVEL15_H
