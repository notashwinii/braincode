#include "level31.h"
#include "ui_level31.h"

level31::level31(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level31)
{
    ui->setupUi(this);
}

level31::~level31()
{
    delete ui;
}
