#include "level8.h"
#include "ui_level8.h"


level8::level8(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::level8)
{
    ui->setupUi(this);

    Level9 = new level9();
}

level8::~level8()
{
    delete ui;
}

void level8::on_Next_clicked()
{
    Level9->show();
}

