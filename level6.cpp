#include "level6.h"
#include "ui_level6.h"
#include<QPixmap>

level6::level6(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level6)
{
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_a6.jpg");
    ui->label_a6->setPixmap(pix);

}

level6::~level6()
{
    delete ui;
}
