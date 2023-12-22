#include "level60.h"
#include "ui_level60.h"

level60::level60(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level60)
{
    ui->setupUi(this);
}

level60::~level60()
{
    delete ui;
}
