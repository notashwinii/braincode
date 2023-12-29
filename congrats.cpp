#include "congrats.h"
#include "ui_congrats.h"

congrats::congrats(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::congrats)
{
    ui->setupUi(this);
}

congrats::~congrats()
{
    delete ui;
}
