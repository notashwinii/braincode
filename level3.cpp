#include "level3.h"
#include "ui_level3.h"
#include<QPixmap>

level3::level3(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level3)
{
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_a3.jpg");
    ui->label_a3->setPixmap(pix);
}

level3::~level3()
{
    delete ui;
}

void level3::on_level3Back_clicked()
{

}


void level3::on_level3Next_clicked()
{

}


void level3::on_quit_clicked()
{

}


void level3::on_how_clicked()
{

}

