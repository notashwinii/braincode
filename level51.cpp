#include "level51.h"
#include "ui_level51.h"

level51::level51(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level51)
{
    ui->setupUi(this);
}

level51::~level51()
{
    delete ui;
}
