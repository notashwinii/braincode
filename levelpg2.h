#ifndef LEVELPG2_H
#define LEVELPG2_H

#include <QMainWindow>
#include"levelpg3.h"

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

};

#endif // LEVELPG2_H
