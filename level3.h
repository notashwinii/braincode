#ifndef LEVEL3_H
#define LEVEL3_H

#include <QWidget>

namespace Ui {
class level3;
}

class level3 : public QWidget
{
    Q_OBJECT

public:
    explicit level3(QWidget *parent = nullptr);
    ~level3();

private:
    Ui::level3 *ui;
};

#endif // LEVEL3_H
