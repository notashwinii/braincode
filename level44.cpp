#include "level44.h"
#include "ui_level44.h"

level44::level44(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level44)
{
    ui->setupUi(this);
}

level44::~level44()
{
    delete ui;
}
