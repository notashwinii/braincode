#include "level16.h"
#include "ui_level16.h"

level16::level16(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level16)
{
    ui->setupUi(this);
}

level16::~level16()
{
    delete ui;
}
