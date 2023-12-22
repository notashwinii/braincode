#include "level27.h"
#include "ui_level27.h"

level27::level27(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level27)
{
    ui->setupUi(this);
}

level27::~level27()
{
    delete ui;
}
