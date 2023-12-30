#include "level16.h"
#include "ui_level16.h"
#include<QPixmap>

level16::level16(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level16)
{
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_b4.jpg");
    ui->label_b4->setPixmap(pix);
}

level16::~level16()
{
    delete ui;
}
