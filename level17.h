#ifndef LEVEL17_H
#define LEVEL17_H

#include <QWidget>

namespace Ui {
class level17;
}

class level17 : public QWidget
{
    Q_OBJECT

public:
    explicit level17(QWidget *parent = nullptr);
    ~level17();

private:
    Ui::level17 *ui;
};

#endif // LEVEL17_H
