#include "level43.h"
#include "ui_level43.h"

level43::level43(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level43)
{
    ui->setupUi(this);
}

level43::~level43()
{
    delete ui;
}
