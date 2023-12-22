#include "level34.h"
#include "ui_level34.h"

level34::level34(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level34)
{
    ui->setupUi(this);
}

level34::~level34()
{
    delete ui;
}
