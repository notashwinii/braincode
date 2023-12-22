#include "level53.h"
#include "ui_level53.h"

level53::level53(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level53)
{
    ui->setupUi(this);
}

level53::~level53()
{
    delete ui;
}
