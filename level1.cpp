#include "level1.h"
#include "ui_level1.h"
#include<QPixmap>

level1::level1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level1)
{
    //constructor
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_a1.jpg");
    ui->label_a1->setPixmap(pix);



    Level2 = new level2();

}

level1::~level1()
{
    delete Level2;
    delete ui;
}




void level1::on_level1Next_clicked()
{
    Level2 ->show();
}


void level1::on_quit1_clicked()
{

}

