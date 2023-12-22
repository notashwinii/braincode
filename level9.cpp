#include "level9.h"
#include "ui_level9.h"

level9::level9(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level9)
{
    ui->setupUi(this);
}

level9::~level9()
{
    delete ui;
}
