#ifndef LEVEL37_H
#define LEVEL37_H

#include <QWidget>

namespace Ui {
class level37;
}

class level37 : public QWidget
{
    Q_OBJECT

public:
    explicit level37(QWidget *parent = nullptr);
    ~level37();

private:
    Ui::level37 *ui;
};

#endif // LEVEL37_H
