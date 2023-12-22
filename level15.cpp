#include "level15.h"
#include "ui_level15.h"

level15::level15(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level15)
{
    ui->setupUi(this);
}

level15::~level15()
{
    delete ui;
}
