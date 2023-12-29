#include "levelpg5.h"
#include "ui_levelpg5.h"

levelpg5::levelpg5(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::levelpg5)
{
    ui->setupUi(this);
    Level49 = new level49();
    Level50 = new level50();
    Level51 = new level51();
    Level52 = new level52();
    Level53 = new level53();
    Level54 = new level54();
    Level55 = new level55();
    Level56 = new level56();
    Level57 = new level57();
    Level58 = new level58();
    Level59 = new level59();
    Level60 = new level60();
}

levelpg5::~levelpg5()
{
    delete Level49;
    delete Level50;
    delete Level51;
    delete Level52;
    delete Level53;
    delete Level54;
    delete Level55;
    delete Level56;
    delete Level57;
    delete Level58;
    delete Level59;
    delete Level60;
    delete ui;
}

void levelpg5::on_levelpg5Back_clicked()
{

}


void levelpg5::on_pushButton49_clicked()
{
    Level49 ->show();

}


void levelpg5::on_pushButton50_clicked()
{
    Level50 ->show();

}


void levelpg5::on_pushButton51_clicked()
{
    Level51 ->show();

}


void levelpg5::on_pushButton52_clicked()
{
    Level52 ->show();

}


void levelpg5::on_pushButton53_clicked()
{
    Level53 ->show();

}


void levelpg5::on_pushButton54_clicked()
{
    Level54 ->show();

}


void levelpg5::on_pushButton55_clicked()
{
    Level55 ->show();

}


void levelpg5::on_pushButton56_clicked()
{
    Level56 ->show();

}


void levelpg5::on_pushButton57_clicked()
{
    Level57 ->show();

}


void levelpg5::on_pushButton58_clicked()
{
    Level58 ->show();

}


void levelpg5::on_pushButton59_clicked()
{
    Level59 ->show();

}


void levelpg5::on_pushButton60_clicked()
{
    Level60 ->show();

}

