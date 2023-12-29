#include "level1.h"
#include "ui_level1.h"

level1::level1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level1)
{
    ui->setupUi(this);
    Level2 = new level2();
}

level1::~level1()
{
    delete Level2;
    delete ui;
}



