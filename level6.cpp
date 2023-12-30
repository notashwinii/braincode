#include "level6.h"
#include "ui_level6.h"
#include<QPixmap>

level6::level6(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level6)
{
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_b12.jpg");
    ui->label_a6->setPixmap(pix);

     Level7 = new level7();

}

level6::~level6()
{
    delete ui;
}

void level6::on_Next_clicked()
{
    Level7 ->show();
}
