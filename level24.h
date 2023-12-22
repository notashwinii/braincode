#ifndef LEVEL24_H
#define LEVEL24_H

#include <QWidget>

namespace Ui {
class level24;
}

class level24 : public QWidget
{
    Q_OBJECT

public:
    explicit level24(QWidget *parent = nullptr);
    ~level24();

private:
    Ui::level24 *ui;
};

#endif // LEVEL24_H
