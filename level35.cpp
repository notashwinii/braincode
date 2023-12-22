#include "level35.h"
#include "ui_level35.h"

level35::level35(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level35)
{
    ui->setupUi(this);
}

level35::~level35()
{
    delete ui;
}
