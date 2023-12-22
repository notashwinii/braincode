#include "level57.h"
#include "ui_level57.h"

level57::level57(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level57)
{
    ui->setupUi(this);
}

level57::~level57()
{
    delete ui;
}
