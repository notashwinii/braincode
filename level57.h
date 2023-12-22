#ifndef LEVEL57_H
#define LEVEL57_H

#include <QWidget>

namespace Ui {
class level57;
}

class level57 : public QWidget
{
    Q_OBJECT

public:
    explicit level57(QWidget *parent = nullptr);
    ~level57();

private:
    Ui::level57 *ui;
};

#endif // LEVEL57_H
