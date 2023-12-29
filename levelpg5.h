#ifndef LEVELPG5_H
#define LEVELPG5_H

#include <QWidget>

#include "level49.h"
#include "level50.h"
#include "level51.h"
#include "level52.h"
#include "level53.h"
#include "level54.h"
#include "level55.h"
#include "level56.h"
#include "level57.h"
#include "level58.h"
#include "level59.h"
#include "level60.h"

namespace Ui {
class levelpg5;
}

class levelpg5 : public QWidget
{
    Q_OBJECT

public:
    explicit levelpg5(QWidget *parent = nullptr);
    ~levelpg5();

private slots:
    void on_levelpg5Back_clicked();

    void on_pushButton49_clicked();

    void on_pushButton50_clicked();

    void on_pushButton51_clicked();

    void on_pushButton52_clicked();

    void on_pushButton53_clicked();

    void on_pushButton54_clicked();

    void on_pushButton55_clicked();

    void on_pushButton56_clicked();

    void on_pushButton57_clicked();

    void on_pushButton58_clicked();

    void on_pushButton59_clicked();

    void on_pushButton60_clicked();

private:
    Ui::levelpg5 *ui;
    level49 *Level49;
    level50 *Level50;
    level51 *Level51;
    level52 *Level52;
    level53 *Level53;
    level54 *Level54;
    level55 *Level55;
    level56 *Level56;
    level57 *Level57;
    level58 *Level58;
    level59 *Level59;
    level60 *Level60;
};

#endif // LEVELPG5_H
