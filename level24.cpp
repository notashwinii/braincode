#include "level24.h"
#include "ui_level24.h"

level24::level24(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level24)
{
    ui->setupUi(this);
}

level24::~level24()
{
    delete ui;
}
