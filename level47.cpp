#include "level47.h"
#include "ui_level47.h"

level47::level47(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level47)
{
    ui->setupUi(this);
}

level47::~level47()
{
    delete ui;
}
