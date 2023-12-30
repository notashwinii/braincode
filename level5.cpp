#include "level5.h"
#include "ui_level5.h"
#include<QPixmap>

level5::level5(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level5)
{
    ui->setupUi(this);
    QPixmap pix("D:/braincode/pictures/questions/raven_b6.jpg");
    ui->label_a5->setPixmap(pix);

     Level6 = new level6();
}

level5::~level5()
{
    delete ui;
}

void level5::on_Next_clicked()
{
    Level6 ->show();
}

