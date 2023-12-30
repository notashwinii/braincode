#include "level14.h"
#include "ui_level14.h"
#include<QPixmap>


level14::level14(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level14)
{
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_e6.jpg");
    ui->label_b2->setPixmap(pix);

    Level15 = new level15();
}

level14::~level14()
{
    delete ui;
}


void level14::on_Next_clicked()
{
    Level15 ->show();
}
