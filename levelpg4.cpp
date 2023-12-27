#include "levelpg4.h"
#include "ui_levelpg4.h"

levelpg4::levelpg4(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::levelpg4)
{
    ui->setupUi(this);
}

levelpg4::~levelpg4()
{
    delete ui;
}

void levelpg4::on_levelpg4Next_clicked()
{
    Levelpg5 = new levelpg5(this);
    Levelpg5 ->show();
}


void levelpg4::on_levelpg4Back_clicked()
{

}

