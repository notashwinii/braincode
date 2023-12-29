#ifndef LEVELPG3_H
#define LEVELPG3_H

#include <QWidget>
#include "levelpg4.h"
#include "level25.h"
#include "level26.h"
#include "level27.h"
#include "level28.h"
#include "level29.h"
#include "level30.h"
#include "level31.h"
#include "level32.h"
#include "level33.h"
#include "level34.h"
#include "level35.h"
#include "level36.h"

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

    void on_levelpg3Back_clicked();

    void on_levelpg3Next_clicked();

    void on_pushButton25_clicked();

    void on_pushButton26_clicked();

    void on_pushButton27_clicked();

    void on_pushButton28_clicked();

    void on_pushButton29_clicked();

    void on_pushButton30_clicked();

    void on_pushButton31_clicked();

    void on_pushButton32_clicked();

    void on_pushButton33_clicked();

    void on_pushButton34_clicked();

    void on_pushButton35_clicked();

    void on_pushButton36_clicked();



private:
    Ui::levelpg3 *ui;
     levelpg4 *Levelpg4;
    level25 *Level25;
    level26 *Level26;
    level27 *Level27;
    level28 *Level28;
    level29 *Level29;
    level30 *Level30;
    level31 *Level31;
    level32 *Level32;
    level33 *Level33;
    level34 *Level34;
    level35 *Level35;
    level36 *Level36;

};

#endif // LEVELPG3_H
