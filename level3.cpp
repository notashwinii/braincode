#include "level3.h"
#include "ui_level3.h"
#include<QPixmap>

level3::level3(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level3)
{
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_a12.jpg");
    ui->label_a3->setPixmap(pix);

     Level4 = new level4();
}

level3::~level3()
{
    delete ui;
}

void level3::on_Next_clicked()
{
    Level4 ->show();
}


void level3::on_quit_clicked()
{

}


void level3::on_how_clicked()
{

}

