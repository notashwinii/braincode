#include "level30.h"
#include "ui_level30.h"

level30::level30(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level30)
{
    ui->setupUi(this);
}

level30::~level30()
{
    delete ui;
}
