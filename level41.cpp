#include "level41.h"
#include "ui_level41.h"

level41::level41(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level41)
{
    ui->setupUi(this);
}

level41::~level41()
{
    delete ui;
}
