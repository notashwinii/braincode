#include "level48.h"
#include "ui_level48.h"

level48::level48(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level48)
{
    ui->setupUi(this);
}

level48::~level48()
{
    delete ui;
}
