#include "level45.h"
#include "ui_level45.h"

level45::level45(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level45)
{
    ui->setupUi(this);
}

level45::~level45()
{
    delete ui;
}
