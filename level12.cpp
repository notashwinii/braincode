#include "level12.h"
#include "ui_level12.h"

level12::level12(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level12)
{
    ui->setupUi(this);
}

level12::~level12()
{
    delete ui;
}
