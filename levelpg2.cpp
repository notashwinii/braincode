#include "levelpg2.h"
#include "ui_levelpg2.h"

levelpg2::levelpg2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::levelpg2)
{
    ui->setupUi(this);
}

levelpg2::~levelpg2()
{
    delete ui;
}

void levelpg2::on_levels_next_clicked()
{
    Levelpg3 = new levelpg3(this);
    Levelpg3 ->show();
}

