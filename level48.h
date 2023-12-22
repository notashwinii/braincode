#ifndef LEVEL48_H
#define LEVEL48_H

#include <QWidget>

namespace Ui {
class level48;
}

class level48 : public QWidget
{
    Q_OBJECT

public:
    explicit level48(QWidget *parent = nullptr);
    ~level48();

private:
    Ui::level48 *ui;
};

#endif // LEVEL48_H
