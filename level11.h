#ifndef LEVEL11_H
#define LEVEL11_H

#include <QWidget>
#include "level12.h"


namespace Ui {
class level11;
}

class level11 : public QWidget
{
    Q_OBJECT

public:
    explicit level11(QWidget *parent = nullptr);
    ~level11();

private slots:
    void on_Next_clicked();

private:
    Ui::level11 *ui;

    level12 *Level12;
};

#endif // LEVEL11_H
