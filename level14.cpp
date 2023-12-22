#include "level14.h"
#include "ui_level14.h"

level14::level14(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level14)
{
    ui->setupUi(this);
}

level14::~level14()
{
    delete ui;
}
