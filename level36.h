#ifndef LEVEL36_H
#define LEVEL36_H

#include <QWidget>

namespace Ui {
class level36;
}

class level36 : public QWidget
{
    Q_OBJECT

public:
    explicit level36(QWidget *parent = nullptr);
    ~level36();

private:
    Ui::level36 *ui;
};

#endif // LEVEL36_H
