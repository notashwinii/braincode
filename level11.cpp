#include "level11.h"
#include "ui_level11.h"
#include<QPixmap>


level11::level11(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level11)
{
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_d6.jpg");
    ui->label_a11->setPixmap(pix);

    Level12 = new level12();
}

level11::~level11()
{
    delete ui;
}


void level11::on_Next_clicked()
{
    Level12 ->show();
}
