#include "level37.h"
#include "ui_level37.h"

level37::level37(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level37)
{
    ui->setupUi(this);
}

level37::~level37()
{
    delete ui;
}
