#include "level13.h"
#include "ui_level13.h"
#include<QPixmap>

level13::level13(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level13)
{
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_e1.jpg");
    ui->label_b1->setPixmap(pix);
}

level13::~level13()
{
    delete ui;
}

void level13::on_level13Back_clicked()
{

}


void level13::on_level13Next_clicked()
{

}


void level13::on_how_clicked()
{

}


void level13::on_quit_clicked()
{

}

