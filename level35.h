#ifndef LEVEL35_H
#define LEVEL35_H

#include <QWidget>

namespace Ui {
class level35;
}

class level35 : public QWidget
{
    Q_OBJECT

public:
    explicit level35(QWidget *parent = nullptr);
    ~level35();

private:
    Ui::level35 *ui;
};

#endif // LEVEL35_H
