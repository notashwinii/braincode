#ifndef LEVEL38_H
#define LEVEL38_H

#include <QWidget>

namespace Ui {
class level38;
}

class level38 : public QWidget
{
    Q_OBJECT

public:
    explicit level38(QWidget *parent = nullptr);
    ~level38();

private:
    Ui::level38 *ui;
};

#endif // LEVEL38_H
