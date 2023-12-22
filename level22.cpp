#include "level22.h"
#include "ui_level22.h"

level22::level22(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level22)
{
    ui->setupUi(this);
}

level22::~level22()
{
    delete ui;
}
