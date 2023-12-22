#include "level36.h"
#include "ui_level36.h"

level36::level36(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level36)
{
    ui->setupUi(this);
}

level36::~level36()
{
    delete ui;
}
