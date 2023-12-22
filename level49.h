#ifndef LEVEL49_H
#define LEVEL49_H

#include <QWidget>

namespace Ui {
class level49;
}

class level49 : public QWidget
{
    Q_OBJECT

public:
    explicit level49(QWidget *parent = nullptr);
    ~level49();

private:
    Ui::level49 *ui;
};

#endif // LEVEL49_H
