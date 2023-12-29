#include "levelpg3.h"
#include "ui_levelpg3.h"

levelpg3::levelpg3(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::levelpg3)
{
    ui->setupUi(this);
    Levelpg4 = new levelpg4();
    Level25 = new level25();
    Level26 = new level26();
    Level27 = new level27();
    Level28 = new level28();
    Level29 = new level29();
    Level30 = new level30();
    Level31 = new level31();
    Level32 = new level32();
    Level33 = new level33();
    Level34 = new level34();
    Level35 = new level35();
    Level36 = new level36();
}

levelpg3::~levelpg3()
{
    delete Level25;
    delete Level26;
    delete Level27;
    delete Level28;
    delete Level29;
    delete Level30;
    delete Level31;
    delete Level32;
    delete Level33;
    delete Level34;
    delete Level35;
    delete Level36;
    delete ui;
}



void levelpg3::on_levelpg3Back_clicked()
{

}


void levelpg3::on_levelpg3Next_clicked()
{
        Levelpg4 ->show();
}


void levelpg3::on_pushButton25_clicked()
{

    Level25 ->show();

}


void levelpg3::on_pushButton26_clicked()
{
    Level26 ->show();

}


void levelpg3::on_pushButton27_clicked()
{
    Level27 ->show();

}


void levelpg3::on_pushButton28_clicked()
{
    Level28 ->show();

}


void levelpg3::on_pushButton29_clicked()
{
    Level29 ->show();

}


void levelpg3::on_pushButton30_clicked()
{
    Level30 ->show();

}


void levelpg3::on_pushButton31_clicked()
{
    Level31 ->show();

}


void levelpg3::on_pushButton32_clicked()
{
    Level32 ->show();

}


void levelpg3::on_pushButton33_clicked()
{
    Level33 ->show();

}


void levelpg3::on_pushButton34_clicked()
{
    Level34 ->show();

}


void levelpg3::on_pushButton35_clicked()
{
    Level35 ->show();

}


void levelpg3::on_pushButton36_clicked()
{
    Level36 ->show();

}


