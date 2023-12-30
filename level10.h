#ifndef LEVEL10_H
#define LEVEL10_H

#include <QWidget>
#include"level11.h"

namespace Ui {
class level10;
}

class level10 : public QWidget
{
    Q_OBJECT

public:
    explicit level10(QWidget *parent = nullptr);
    ~level10();

private slots:
    void on_Next_clicked();

private:
    Ui::level10 *ui;

    level11 *Level11;
};

#endif // LEVEL10_H
