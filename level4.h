#ifndef LEVEL4_H
#define LEVEL4_H

#include <QWidget>
#include"level5.h"


namespace Ui {
class level4;
}

class level4 : public QWidget
{
    Q_OBJECT

public:
    explicit level4(QWidget *parent = nullptr);
    ~level4();

private slots:
    void on_Next_clicked();

private:
    Ui::level4 *ui;

    level5 *Level5;
};

#endif // LEVEL4_H
