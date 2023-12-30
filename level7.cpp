#include "level7.h"
#include "ui_level7.h"
#include<QPixmap>

level7::level7(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level7)
{
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_a7.jpg");
    ui->label_a7->setPixmap(pix);

    Level8 = new level8();
}

level7::~level7()
{
    delete ui;
}

void level7::on_Next_clicked()
{
    Level8->show();
}

