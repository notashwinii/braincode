#include "level21.h"
#include "ui_level21.h"

level21::level21(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level21)
{
    ui->setupUi(this);
}

level21::~level21()
{
    delete ui;
}
