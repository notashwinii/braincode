#include "level52.h"
#include "ui_level52.h"

level52::level52(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level52)
{
    ui->setupUi(this);
}

level52::~level52()
{
    delete ui;
}
