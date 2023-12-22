#include "level23.h"
#include "ui_level23.h"

level23::level23(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level23)
{
    ui->setupUi(this);
}

level23::~level23()
{
    delete ui;
}
