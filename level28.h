#ifndef LEVEL28_H
#define LEVEL28_H

#include <QWidget>

namespace Ui {
class level28;
}

class level28 : public QWidget
{
    Q_OBJECT

public:
    explicit level28(QWidget *parent = nullptr);
    ~level28();

private:
    Ui::level28 *ui;
};

#endif // LEVEL28_H
