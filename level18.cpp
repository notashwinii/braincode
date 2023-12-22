#include "level18.h"
#include "ui_level18.h"

level18::level18(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level18)
{
    ui->setupUi(this);
}

level18::~level18()
{
    delete ui;
}
