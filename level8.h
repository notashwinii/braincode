#ifndef LEVEL8_H
#define LEVEL8_H

#include <QWidget>
#include "level9.h"

namespace Ui {
class level8;
}

class level8 : public QWidget
{
    Q_OBJECT

public:
    explicit level8(QWidget *parent = nullptr);
    ~level8();

private slots:
    void on_Next_clicked();

private:
    Ui::level8 *ui;
      level9 *Level9;
};

#endif // LEVEL8_H
