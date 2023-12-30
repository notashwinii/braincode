#include "level14.h"
#include "ui_level14.h"
#include<QPixmap>


level14::level14(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level14)
{
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_b2.jpg");
    ui->label_b2->setPixmap(pix);
}

level14::~level14()
{
    delete ui;
}
