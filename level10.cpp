#include "level10.h"
#include "ui_level10.h"

level10::level10(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level10)
{
    ui->setupUi(this);
}

level10::~level10()
{
    delete ui;
}
