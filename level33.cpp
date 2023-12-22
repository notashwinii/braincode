#include "level33.h"
#include "ui_level33.h"

level33::level33(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level33)
{
    ui->setupUi(this);
}

level33::~level33()
{
    delete ui;
}
