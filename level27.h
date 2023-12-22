#ifndef LEVEL27_H
#define LEVEL27_H

#include <QWidget>

namespace Ui {
class level27;
}

class level27 : public QWidget
{
    Q_OBJECT

public:
    explicit level27(QWidget *parent = nullptr);
    ~level27();

private:
    Ui::level27 *ui;
};

#endif // LEVEL27_H
