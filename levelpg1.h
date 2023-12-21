#ifndef LEVELPG1_H
#define LEVELPG1_H

#include <QMainWindow>
#include"levelpg2.h"
namespace Ui {
class levelpg1;
}

class levelpg1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit levelpg1(QWidget *parent = nullptr);
    ~levelpg1();

private slots:
    void on_levels_next_clicked();

private:
    Ui::levelpg1 *ui;
    levelpg2 *Levelpg2;
};

#endif // LEVELPG1_H
