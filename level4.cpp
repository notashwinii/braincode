#include "level4.h"
#include "ui_level4.h"
#include<QPixmap>

level4::level4(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level4)
{
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_a4.jpg");
    ui->label_a4->setPixmap(pix);
}

level4::~level4()
{
    delete ui;
}

void level4::on_level4Back_clicked()
{

}

