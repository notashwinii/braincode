#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("D:/braincode/braincode.png");
    ui->label_pic->setPixmap(pix);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_start_clicked()
{//modal less approach: can access first and second dialog both at same time
    Login = new login(this);//this=mainwindow
    Login ->show();
}

