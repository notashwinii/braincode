#ifndef LEVELPG4_H
#define LEVELPG4_H

#include <QWidget>
#include "levelpg5.h"
#include "level37.h"
#include "level38.h"
#include "level39.h"
#include "level40.h"
#include "level41.h"
#include "level42.h"
#include "level43.h"
#include "level44.h"
#include "level45.h"
#include "level46.h"
#include "level47.h"
#include "level48.h"

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

    void on_pushButton37_clicked();

    void on_pushButton38_clicked();

    void on_pushButton39_clicked();

    void on_pushButton40_clicked();

    void on_pushButton41_clicked();

    void on_pushButton42_clicked();

    void on_pushButton43_clicked();

    void on_pushButton44_clicked();

    void on_pushButton45_clicked();

    void on_pushButton46_clicked();

    void on_pushButton47_clicked();

    void on_pushButton48_clicked();

private:
    Ui::levelpg4 *ui;
     levelpg5 *Levelpg5;
    level37 *Level37;
    level38 *Level38;
    level39 *Level39;
    level40 *Level40;
    level41 *Level41;
    level42 *Level42;
    level43 *Level43;
    level44 *Level44;
    level45 *Level45;
    level46 *Level46;
    level47 *Level47;
    level48 *Level48;
};

#endif // LEVELPG4_H
