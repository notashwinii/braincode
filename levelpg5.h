#ifndef LEVELPG5_H
#define LEVELPG5_H

#include <QWidget>

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
};

#endif // LEVELPG5_H
