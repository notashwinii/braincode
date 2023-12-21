#include "levelpg1.h"
#include "ui_levelpg1.h"

levelpg1::levelpg1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::levelpg1)
{
    ui->setupUi(this);
}

levelpg1::~levelpg1()
{
    delete ui;
}

void levelpg1::on_levels_next_clicked()
{

}

