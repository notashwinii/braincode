#include "levelpg5.h"
#include "ui_levelpg5.h"

levelpg5::levelpg5(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::levelpg5)
{
    ui->setupUi(this);
}

levelpg5::~levelpg5()
{
    delete ui;
}
