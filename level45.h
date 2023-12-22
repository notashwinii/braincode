#ifndef LEVEL45_H
#define LEVEL45_H

#include <QWidget>

namespace Ui {
class level45;
}

class level45 : public QWidget
{
    Q_OBJECT

public:
    explicit level45(QWidget *parent = nullptr);
    ~level45();

private:
    Ui::level45 *ui;
};

#endif // LEVEL45_H
