#include "levelpg4.h"
#include "ui_levelpg4.h"

levelpg4::levelpg4(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::levelpg4)
{
    ui->setupUi(this);
    Levelpg5 = new levelpg5();
    Level37 = new level37();
    Level38 = new level38();
    Level39 = new level39();
    Level40 = new level40();
    Level41 = new level41();
    Level42 = new level42();
    Level43 = new level43();
    Level44 = new level44();
    Level45 = new level45();
    Level46 = new level46();
    Level47 = new level47();
    Level48 = new level48();
}

levelpg4::~levelpg4()
{
    delete ui;
}

void levelpg4::on_levelpg4Next_clicked()
{

    Levelpg5 ->show();
}


void levelpg4::on_levelpg4Back_clicked()
{

}


void levelpg4::on_pushButton37_clicked()
{
    Level37 ->show();

}


void levelpg4::on_pushButton38_clicked()
{
    Level38 ->show();

}


void levelpg4::on_pushButton39_clicked()
{
    Level39 ->show();

}


void levelpg4::on_pushButton40_clicked()
{
    Level40 ->show();

}


void levelpg4::on_pushButton41_clicked()
{
    Level41 ->show();

}


void levelpg4::on_pushButton42_clicked()
{
    Level42 ->show();

}


void levelpg4::on_pushButton43_clicked()
{
    Level43 ->show();

}


void levelpg4::on_pushButton44_clicked()
{
    Level44 ->show();

}


void levelpg4::on_pushButton45_clicked()
{
    Level45 ->show();

}


void levelpg4::on_pushButton46_clicked()
{
    Level46 ->show();

}


void levelpg4::on_pushButton47_clicked()
{
    Level47 ->show();

}


void levelpg4::on_pushButton48_clicked()
{
    Level48 ->show();

}

