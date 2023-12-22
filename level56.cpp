#include "level56.h"
#include "ui_level56.h"

level56::level56(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level56)
{
    ui->setupUi(this);
}

level56::~level56()
{
    delete ui;
}
