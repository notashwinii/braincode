#ifndef LEVEL43_H
#define LEVEL43_H

#include <QWidget>

namespace Ui {
class level43;
}

class level43 : public QWidget
{
    Q_OBJECT

public:
    explicit level43(QWidget *parent = nullptr);
    ~level43();

private:
    Ui::level43 *ui;
};

#endif // LEVEL43_H
