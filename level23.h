#ifndef LEVEL23_H
#define LEVEL23_H

#include <QWidget>

namespace Ui {
class level23;
}

class level23 : public QWidget
{
    Q_OBJECT

public:
    explicit level23(QWidget *parent = nullptr);
    ~level23();

private:
    Ui::level23 *ui;
};

#endif // LEVEL23_H
