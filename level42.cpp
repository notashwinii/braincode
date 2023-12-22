#include "level42.h"
#include "ui_level42.h"

level42::level42(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level42)
{
    ui->setupUi(this);
}

level42::~level42()
{
    delete ui;
}
