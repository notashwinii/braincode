#ifndef LEVEL50_H
#define LEVEL50_H

#include <QWidget>

namespace Ui {
class level50;
}

class level50 : public QWidget
{
    Q_OBJECT

public:
    explicit level50(QWidget *parent = nullptr);
    ~level50();

private:
    Ui::level50 *ui;
};

#endif // LEVEL50_H
