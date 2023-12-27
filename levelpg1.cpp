#include "levelpg1.h"
#include "ui_levelpg1.h"

levelpg1::levelpg1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::levelpg1)
{
    ui->setupUi(this);
    Levelpg2 = new levelpg2();
    Level1 = new level1();
    Level2 = new level2();
    Level3 = new level3();
    Level4 = new level4();
    Level5 = new level5();
    Level6 = new level6();
    Level7 = new level7();
    Level8 = new level8();
    Level9 = new level9();
    Level10 = new level10();
    Level11 = new level11();
    Level12 = new level12();

}

levelpg1::~levelpg1()
{
    delete Levelpg2;
    delete Level1;
    delete Level2;
    delete Level3;
    delete Level4;
    delete Level5;
    delete Level6;
    delete Level7;
    delete Level8;
    delete Level9;
    delete Level10;
    delete Level11;
    delete Level12;
    delete ui;

}




void levelpg1::on_levelpg1Next_clicked()
{
    Levelpg2 ->show();
}


void levelpg1::on_pushButton1_clicked()
{
    Level1 ->show();
}


void levelpg1::on_pushButton2_clicked()
{
    Level2 ->show();
}


void levelpg1::on_pushButton3_clicked()
{
    Level3 ->show();
}


void levelpg1::on_pushButton4_clicked()
{
    Level4 ->show();
}


void levelpg1::on_pushButton5_clicked()
{
    Level5 ->show();
}


void levelpg1::on_pushButton6_clicked()
{
    Level6 ->show();
}


void levelpg1::on_pushButton7_clicked()
{
    Level7 ->show();
}


void levelpg1::on_pushButton8_clicked()
{
    Level8 ->show();
}


void levelpg1::on_pushButton9_clicked()
{
    Level9 ->show();
}


void levelpg1::on_pushButton10_clicked()
{
    Level10 ->show();
}


void levelpg1::on_pushButton11_clicked()
{
    Level11 ->show();
}


void levelpg1::on_pushButton12_clicked()
{
    Level12 ->show();
}

