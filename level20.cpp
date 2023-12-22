#include "level20.h"
#include "ui_level20.h"

level20::level20(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level20)
{
    ui->setupUi(this);
}

level20::~level20()
{
    delete ui;
}
