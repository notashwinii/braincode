#include "level15.h"
#include "ui_level15.h"
#include<QPixmap>


level15::level15(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level15)
{
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_b3.jpg");
    ui->label_b3->setPixmap(pix);
}

level15::~level15()
{
    delete ui;
}
