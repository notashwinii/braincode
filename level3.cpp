#include "level3.h"
#include "ui_level3.h"

level3::level3(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level3)
{
    ui->setupUi(this);
}

level3::~level3()
{
    delete ui;
}
