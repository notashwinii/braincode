#include "level39.h"
#include "ui_level39.h"

level39::level39(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level39)
{
    ui->setupUi(this);
}

level39::~level39()
{
    delete ui;
}
