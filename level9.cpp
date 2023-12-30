#include "level9.h"
#include "ui_level9.h"

level9::level9(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level9)
{
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_c12.jpg");
    ui->label_a9->setPixmap(pix);

    Level10 = new level10();
}

level9::~level9()
{
    delete ui;
}



void level9::on_Next_clicked()
{
    Level10 ->show();
}
