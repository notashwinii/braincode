#include "level58.h"
#include "ui_level58.h"

level58::level58(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level58)
{
    ui->setupUi(this);
}

level58::~level58()
{
    delete ui;
}
