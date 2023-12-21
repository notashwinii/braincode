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

private:
    Ui::levelpg2 *ui;
    levelpg3 *Levelpg3;
};

#endif // LEVELPG2_H
