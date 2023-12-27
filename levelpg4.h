#ifndef LEVELPG4_H
#define LEVELPG4_H

#include <QWidget>
#include "levelpg5.h"
namespace Ui {
class levelpg4;
}

class levelpg4 : public QWidget
{
    Q_OBJECT

public:
    explicit levelpg4(QWidget *parent = nullptr);
    ~levelpg4();

private slots:
    void on_levelpg4Next_clicked();

    void on_levelpg4Back_clicked();

private:
    Ui::levelpg4 *ui;
     levelpg5 *Levelpg5;
};

#endif // LEVELPG4_H
