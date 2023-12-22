#include "level55.h"
#include "ui_level55.h"

level55::level55(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level55)
{
    ui->setupUi(this);
}

level55::~level55()
{
    delete ui;
}
