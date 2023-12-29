#include "levelpg2.h"
#include "ui_levelpg2.h"

levelpg2::levelpg2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::levelpg2)
{
    ui->setupUi(this);
    Levelpg3 = new levelpg3();
    Level13 = new level13();
    Level14 = new level14();
    Level15 = new level15();
    Level16 = new level16();
    Level17 = new level17();
    Level18 = new level18();
    Level19 = new level19();
    Level20 = new level20();
    Level21 = new level21();
    Level22 = new level22();
    Level23 = new level23();
    Level24 = new level24();
}

levelpg2::~levelpg2()
{
    delete Levelpg3;
    delete Level13;
    delete Level14;
    delete Level15;
    delete Level16;
    delete Level17;
    delete Level18;
    delete Level19;
    delete Level20;
    delete Level21;
    delete Level22;
    delete Level23;
    delete Level24;
    delete ui;
}

void levelpg2::on_levelpg2Next_clicked()
{

    Levelpg3 ->show();
}


void levelpg2::on_levelpg2Back_clicked()
{


}


void levelpg2::on_pushButton13_clicked()
{
     Level13 ->show();

}


void levelpg2::on_pushButton14_clicked()
{
     Level14 ->show();

}


void levelpg2::on_pushButton15_clicked()
{
     Level15 ->show();

}


void levelpg2::on_pushButton16_clicked()
{
     Level16 ->show();

}


void levelpg2::on_pushButton17_clicked()
{
     Level17 ->show();

}


void levelpg2::on_pushButton18_clicked()
{
     Level18 ->show();

}


void levelpg2::on_pushButton19_clicked()
{
     Level19 ->show();

}


void levelpg2::on_pushButton20_clicked()
{
     Level20 ->show();

}


void levelpg2::on_pushButton21_clicked()
{
     Level21 ->show();

}


void levelpg2::on_pushButton22_clicked()
{
     Level22 ->show();

}


void levelpg2::on_pushButton23_clicked()
{
     Level23 ->show();

}


void levelpg2::on_pushButton24_clicked()
{
     Level24 ->show();

}

