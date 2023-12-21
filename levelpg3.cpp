#include "levelpg3.h"
#include "ui_levelpg3.h"

levelpg3::levelpg3(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::levelpg3)
{
    ui->setupUi(this);
}

levelpg3::~levelpg3()
{
    delete ui;
}
