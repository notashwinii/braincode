#ifndef LEVEL55_H
#define LEVEL55_H

#include <QWidget>

namespace Ui {
class level55;
}

class level55 : public QWidget
{
    Q_OBJECT

public:
    explicit level55(QWidget *parent = nullptr);
    ~level55();

private:
    Ui::level55 *ui;
};

#endif // LEVEL55_H
