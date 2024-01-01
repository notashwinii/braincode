#include "level1.h"
#include "ui_level1.h"


#include <QApplication>
#include<QPixmap>



level1::level1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level1)
{
    //constructor
    ui->setupUi(this);

    QPixmap pix("D:/braincode/pictures/questions/raven_a1.jpg");
    ui->label_a1->setPixmap(pix);


    Level2 = new level2();


}

level1::~level1()
{
    delete Level2;
    qApp->quit();
}



void level1::on_Next_clicked()
{

    if(ui->q1_4->isChecked()){}



    Level2 ->show();


}





