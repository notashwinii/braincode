#include "level8.h"
#include "ui_level8.h"
#include"QPixmap"

level8::level8(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level8)
{
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_a8.jpg");
    ui->label_a8->setPixmap(pix);

    Level9 = new level9();
}

level8::~level8()
{
    delete ui;
}

void level8::on_Next_clicked()
{
    Level9->show();
}

