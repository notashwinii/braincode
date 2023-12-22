#ifndef LEVEL58_H
#define LEVEL58_H

#include <QWidget>

namespace Ui {
class level58;
}

class level58 : public QWidget
{
    Q_OBJECT

public:
    explicit level58(QWidget *parent = nullptr);
    ~level58();

private:
    Ui::level58 *ui;
};

#endif // LEVEL58_H
