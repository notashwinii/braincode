#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include"levelpg1.h"

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_loginBack_clicked();

private:
    Ui::login *ui;
    levelpg1 *Levelpg1;

};

#endif // LOGIN_H
