#include "levelpg2.h"
#include "ui_levelpg2.h"

levelpg2::levelpg2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::levelpg2)
{
    ui->setupUi(this);
}

levelpg2::~levelpg2()
{
    delete ui;
}

void levelpg2::on_levelpg2Next_clicked()
{
    Levelpg3 = new levelpg3(this);
    Levelpg3 ->show();
}


void levelpg2::on_levelpg2Back_clicked()
{

}


void levelpg2::on_pushButton13_clicked()
{

}


void levelpg2::on_pushButton14_clicked()
{

}


void levelpg2::on_pushButton15_clicked()
{

}


void levelpg2::on_pushButton16_clicked()
{

}


void levelpg2::on_pushButton17_clicked()
{

}


void levelpg2::on_pushButton18_clicked()
{

}


void levelpg2::on_pushButton19_clicked()
{

}


void levelpg2::on_pushButton20_clicked()
{

}


void levelpg2::on_pushButton21_clicked()
{

}


void levelpg2::on_pushButton22_clicked()
{

}


void levelpg2::on_pushButton23_clicked()
{

}


void levelpg2::on_pushButton24_clicked()
{

}

