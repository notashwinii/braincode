#include "level19.h"
#include "ui_level19.h"

level19::level19(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level19)
{
    ui->setupUi(this);
}

level19::~level19()
{
    delete ui;
}
