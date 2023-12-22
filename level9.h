#ifndef LEVEL9_H
#define LEVEL9_H

#include <QWidget>

namespace Ui {
class level9;
}

class level9 : public QWidget
{
    Q_OBJECT

public:
    explicit level9(QWidget *parent = nullptr);
    ~level9();

private:
    Ui::level9 *ui;
};

#endif // LEVEL9_H
