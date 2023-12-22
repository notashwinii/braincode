#include "level25.h"
#include "ui_level25.h"

level25::level25(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level25)
{
    ui->setupUi(this);
}

level25::~level25()
{
    delete ui;
}
