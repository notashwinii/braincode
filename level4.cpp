#include "level4.h"
#include "ui_level4.h"

level4::level4(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level4)
{
    ui->setupUi(this);
}

level4::~level4()
{
    delete ui;
}
