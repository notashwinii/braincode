#ifndef LEVEL54_H
#define LEVEL54_H

#include <QWidget>

namespace Ui {
class level54;
}

class level54 : public QWidget
{
    Q_OBJECT

public:
    explicit level54(QWidget *parent = nullptr);
    ~level54();

private:
    Ui::level54 *ui;
};

#endif // LEVEL54_H
