#include "level11.h"
#include "ui_level11.h"

level11::level11(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level11)
{
    ui->setupUi(this);
}

level11::~level11()
{
    delete ui;
}
