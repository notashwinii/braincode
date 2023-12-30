#ifndef LEVEL15_H
#define LEVEL15_H

#include <QWidget>
#include"congrats.h"

namespace Ui {
class level15;
}

class level15 : public QWidget
{
    Q_OBJECT

public:
    explicit level15(QWidget *parent = nullptr);
    ~level15();

private slots:
    void on_how_2_clicked();

private:
    Ui::level15 *ui;

    congrats *Congrats ;
};

#endif // LEVEL15_H
