#ifndef LEVEL26_H
#define LEVEL26_H

#include <QWidget>

namespace Ui {
class level26;
}

class level26 : public QWidget
{
    Q_OBJECT

public:
    explicit level26(QWidget *parent = nullptr);
    ~level26();

private:
    Ui::level26 *ui;
};

#endif // LEVEL26_H
