#include "level6.h"
#include "ui_level6.h"

level6::level6(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level6)
{
    ui->setupUi(this);
}

level6::~level6()
{
    delete ui;
}
