#include "level17.h"
#include "ui_level17.h"

level17::level17(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level17)
{
    ui->setupUi(this);
}

level17::~level17()
{
    delete ui;
}
