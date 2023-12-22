#ifndef LEVEL41_H
#define LEVEL41_H

#include <QWidget>

namespace Ui {
class level41;
}

class level41 : public QWidget
{
    Q_OBJECT

public:
    explicit level41(QWidget *parent = nullptr);
    ~level41();

private:
    Ui::level41 *ui;
};

#endif // LEVEL41_H
