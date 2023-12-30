#include "level18.h"
#include "ui_level18.h"
#include<QPixmap>

level18::level18(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level18)
{
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_b6.jpg");
    ui->label_b6->setPixmap(pix);
}

level18::~level18()
{
    delete ui;
}
