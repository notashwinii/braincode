#ifndef LEVELPG1_H
#define LEVELPG1_H

#include <QMainWindow>
#include"levelpg2.h"

#include "level1.h"
#include "level2.h"
#include "level3.h"
#include "level4.h"
#include "level5.h"
#include "level6.h"
#include "level7.h"
#include "level8.h"
#include "level9.h"
#include "level10.h"
#include "level11.h"
#include "level12.h"

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

    void on_levelpg1Next_clicked();

    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton6_clicked();

    void on_pushButton7_clicked();

    void on_pushButton8_clicked();

    void on_pushButton9_clicked();

    void on_pushButton10_clicked();

    void on_pushButton11_clicked();

    void on_pushButton12_clicked();

private:
    Ui::levelpg1 *ui;
    levelpg2 *Levelpg2;

    level1 *Level1;
    level2 *Level2;
    level3 *Level3;
    level4 *Level4;
    level5 *Level5;
    level6 *Level6;
    level7 *Level7;
    level8 *Level8;
    level9 *Level9;
    level10 *Level10;
    level11 *Level11;
    level12 *Level12;

};

#endif // LEVELPG1_H
