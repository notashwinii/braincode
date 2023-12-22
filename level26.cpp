#include "level26.h"
#include "ui_level26.h"

level26::level26(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level26)
{
    ui->setupUi(this);
}

level26::~level26()
{
    delete ui;
}
