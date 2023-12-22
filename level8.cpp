#include "level8.h"
#include "ui_level8.h"

level8::level8(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level8)
{
    ui->setupUi(this);
}

level8::~level8()
{
    delete ui;
}
