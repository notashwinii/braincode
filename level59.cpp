#include "level59.h"
#include "ui_level59.h"

level59::level59(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level59)
{
    ui->setupUi(this);
}

level59::~level59()
{
    delete ui;
}
