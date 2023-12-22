#include "level29.h"
#include "ui_level29.h"

level29::level29(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level29)
{
    ui->setupUi(this);
}

level29::~level29()
{
    delete ui;
}
