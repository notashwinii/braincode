#include "level10.h"
#include "ui_level10.h"
#include<QPixmap>

level10::level10(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level10)
{
    ui->setupUi(this);


    QPixmap pix("D:/braincode/pictures/questions/raven_a10.jpg");
    ui->label_a10->setPixmap(pix);



     Level11 = new level11();
}

level10::~level10()
{
    delete ui;
}

void level10::on_Next_clicked()
{
    Level11 ->show();
}
