#ifndef LEVELPG2_H
#define LEVELPG2_H

#include <QMainWindow>
#include"levelpg3.h"
#include "level13.h"
#include "level14.h"
#include "level15.h"
#include "level16.h"
#include "level17.h"
#include "level18.h"
#include "level19.h"
#include "level20.h"
#include "level21.h"
#include "level22.h"
#include "level23.h"
#include "level24.h"

namespace Ui {
class levelpg2;
}

class levelpg2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit levelpg2(QWidget *parent = nullptr);
    ~levelpg2();

private slots:
    void on_levels_next_clicked();

    void on_levelpg2Next_clicked();

    void on_levelpg2Back_clicked();

    void on_pushButton13_clicked();

    void on_pushButton14_clicked();

    void on_pushButton15_clicked();

    void on_pushButton16_clicked();

    void on_pushButton17_clicked();

    void on_pushButton18_clicked();

    void on_pushButton19_clicked();

    void on_pushButton20_clicked();

    void on_pushButton21_clicked();

    void on_pushButton22_clicked();

    void on_pushButton23_clicked();

    void on_pushButton24_clicked();

private:
    Ui::levelpg2 *ui;
    levelpg3 *Levelpg3;
    level13 *Level13;
    level14 *Level14;
    level15 *Level15;
    level16 *Level16;
    level17 *Level17;
    level18 *Level18;
    level19 *Level19;
    level20 *Level20;
    level21 *Level21;
    level22 *Level22;
    level23 *Level23;
    level24 *Level24;

};

#endif // LEVELPG2_H
