#ifndef LEVEL30_H
#define LEVEL30_H

#include <QWidget>

namespace Ui {
class level30;
}

class level30 : public QWidget
{
    Q_OBJECT

public:
    explicit level30(QWidget *parent = nullptr);
    ~level30();

private:
    Ui::level30 *ui;
};

#endif // LEVEL30_H
