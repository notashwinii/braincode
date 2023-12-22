#include "level28.h"
#include "ui_level28.h"

level28::level28(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level28)
{
    ui->setupUi(this);
}

level28::~level28()
{
    delete ui;
}
