#include "level46.h"
#include "ui_level46.h"

level46::level46(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level46)
{
    ui->setupUi(this);
}

level46::~level46()
{
    delete ui;
}
