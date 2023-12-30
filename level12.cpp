#include "level12.h"
#include "ui_level12.h"
#include<QPixmap>

level12::level12(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level12)
{
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_d12.jpg");
    ui->label_a12->setPixmap(pix);
}

level12::~level12()
{
    delete ui;
}
