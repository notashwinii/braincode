#include "level7.h"
#include "ui_level7.h"

level7::level7(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level7)
{
    ui->setupUi(this);
}

level7::~level7()
{
    delete ui;
}
