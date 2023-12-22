#include "level13.h"
#include "ui_level13.h"

level13::level13(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level13)
{
    ui->setupUi(this);
}

level13::~level13()
{
    delete ui;
}
