#include "congrats.h"
#include "ui_congrats.h"

congrats::congrats(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::congrats)
{
    ui->setupUi(this);

    ui->score->setText("level1::points");
}

congrats::~congrats()
{
    delete ui;
}

void congrats::on_playAgain_clicked()
{

}


void congrats::on_goHome_clicked()
{

}


void congrats::on_Quit_clicked()
{
    qApp->quit();
}

