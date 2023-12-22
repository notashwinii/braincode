#ifndef LEVEL12_H
#define LEVEL12_H

#include <QWidget>

namespace Ui {
class level12;
}

class level12 : public QWidget
{
    Q_OBJECT

public:
    explicit level12(QWidget *parent = nullptr);
    ~level12();

private:
    Ui::level12 *ui;
};

#endif // LEVEL12_H
