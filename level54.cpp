#include "level54.h"
#include "ui_level54.h"

level54::level54(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level54)
{
    ui->setupUi(this);
}

level54::~level54()
{
    delete ui;
}
