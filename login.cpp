#include "login.h"
#include "ui_login.h"
#include<QPixmap>
login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);


}

login::~login()
{
    delete ui;
}

void login::on_pushButton_login_clicked()
{
    //modal less approach: can access first and second dialog both at same time
    Levelpg1 = new levelpg1(this);//this=mainwindow
    Levelpg1 ->show();
}


void login::on_pushButton_loginBack_clicked()
{

}

