#ifndef LEVEL12_H
#define LEVEL12_H

#include <QWidget>
#include"level13.h"

namespace Ui {
class level12;
}

class level12 : public QWidget
{
    Q_OBJECT

public:
    explicit level12(QWidget *parent = nullptr);
    ~level12();

private slots:
    void on_Next_clicked();

private:
    Ui::level12 *ui;

     level13 *Level13;
};

#endif // LEVEL12_H
