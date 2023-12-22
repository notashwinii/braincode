#include "level50.h"
#include "ui_level50.h"

level50::level50(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level50)
{
    ui->setupUi(this);
}

level50::~level50()
{
    delete ui;
}
