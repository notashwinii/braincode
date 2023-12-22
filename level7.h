#ifndef LEVEL7_H
#define LEVEL7_H

#include <QWidget>

namespace Ui {
class level7;
}

class level7 : public QWidget
{
    Q_OBJECT

public:
    explicit level7(QWidget *parent = nullptr);
    ~level7();

private:
    Ui::level7 *ui;
};

#endif // LEVEL7_H
