#include "level2.h"
#include "ui_level2.h"

level2::level2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level2)
{
    ui->setupUi(this);


    QPixmap pix("D:/braincode/pictures/questions/raven_a2.jpg");
    ui->label_a2->setPixmap(pix);

}

level2::~level2()
{
    delete ui;
}
