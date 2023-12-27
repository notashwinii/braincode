#include "levelpg3.h"
#include "ui_levelpg3.h"

levelpg3::levelpg3(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::levelpg3)
{
    ui->setupUi(this);
}

levelpg3::~levelpg3()
{
    delete ui;
}



void levelpg3::on_levelpg3Back_clicked()
{

}


void levelpg3::on_levelpg3Next_clicked()
{
    Levelpg4 = new levelpg4(this);
    Levelpg4 ->show();
}

