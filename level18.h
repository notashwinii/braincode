#ifndef LEVEL18_H
#define LEVEL18_H

#include <QWidget>

namespace Ui {
class level18;
}

class level18 : public QWidget
{
    Q_OBJECT

public:
    explicit level18(QWidget *parent = nullptr);
    ~level18();

private:
    Ui::level18 *ui;
};

#endif // LEVEL18_H
