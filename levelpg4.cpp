#include "levelpg4.h"
#include "ui_levelpg4.h"

levelpg4::levelpg4(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::levelpg4)
{
    ui->setupUi(this);
}

levelpg4::~levelpg4()
{
    delete ui;
}
