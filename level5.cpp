#include "level5.h"
#include "ui_level5.h"
#include<QPixmap>

level5::level5(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level5)
{
    ui->setupUi(this);
    QPixmap pix("D:/braincode/pictures/questions/raven_a5.jpg");
    ui->label_a5->setPixmap(pix);
}

level5::~level5()
{
    delete ui;
}
