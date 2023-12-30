#ifndef LEVEL5_H
#define LEVEL5_H

#include <QWidget>
#include "level6.h"

namespace Ui {
class level5;
}

class level5 : public QWidget
{
    Q_OBJECT

public:
    explicit level5(QWidget *parent = nullptr);
    ~level5();

private slots:
    void on_Next_clicked();

private:
    Ui::level5 *ui;

    level6 *Level6;
};

#endif // LEVEL5_H
