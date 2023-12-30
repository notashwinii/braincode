#include "level17.h"
#include "ui_level17.h"
#include<QPixmap>


level17::level17(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level17)
{
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_b5.jpg");
    ui->label_b5->setPixmap(pix);
}

level17::~level17()
{
    delete ui;
}
