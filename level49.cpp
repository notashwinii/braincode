#include "level49.h"
#include "ui_level49.h"

level49::level49(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level49)
{
    ui->setupUi(this);
}

level49::~level49()
{
    delete ui;
}
