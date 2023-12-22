#ifndef LEVEL53_H
#define LEVEL53_H

#include <QWidget>

namespace Ui {
class level53;
}

class level53 : public QWidget
{
    Q_OBJECT

public:
    explicit level53(QWidget *parent = nullptr);
    ~level53();

private:
    Ui::level53 *ui;
};

#endif // LEVEL53_H
