#include "level38.h"
#include "ui_level38.h"

level38::level38(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level38)
{
    ui->setupUi(this);
}

level38::~level38()
{
    delete ui;
}
