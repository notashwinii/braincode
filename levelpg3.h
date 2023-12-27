#ifndef LEVELPG3_H
#define LEVELPG3_H

#include <QWidget>
#include "levelpg4.h"
namespace Ui {
class levelpg3;
}

class levelpg3 : public QWidget
{
    Q_OBJECT

public:
    explicit levelpg3(QWidget *parent = nullptr);
    ~levelpg3();

private slots:
    void on_pushButton_2_clicked();

    void on_levelpg3Back_clicked();

    void on_levelpg3Next_clicked();

private:
    Ui::levelpg3 *ui;
     levelpg4 *Levelpg4;
};

#endif // LEVELPG3_H
