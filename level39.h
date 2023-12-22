#ifndef LEVEL39_H
#define LEVEL39_H

#include <QWidget>

namespace Ui {
class level39;
}

class level39 : public QWidget
{
    Q_OBJECT

public:
    explicit level39(QWidget *parent = nullptr);
    ~level39();

private:
    Ui::level39 *ui;
};

#endif // LEVEL39_H
