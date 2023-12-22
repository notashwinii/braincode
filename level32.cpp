#include "level32.h"
#include "ui_level32.h"

level32::level32(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level32)
{
    ui->setupUi(this);
}

level32::~level32()
{
    delete ui;
}
