#ifndef LEVEL42_H
#define LEVEL42_H

#include <QWidget>

namespace Ui {
class level42;
}

class level42 : public QWidget
{
    Q_OBJECT

public:
    explicit level42(QWidget *parent = nullptr);
    ~level42();

private:
    Ui::level42 *ui;
};

#endif // LEVEL42_H
