#include "level40.h"
#include "ui_level40.h"

level40::level40(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level40)
{
    ui->setupUi(this);
}

level40::~level40()
{
    delete ui;
}
