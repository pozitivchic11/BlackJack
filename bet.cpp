#include "bet.h"
#include "ui_betwindow.h"

Bet::Bet(QWidget *parent) : QDialog(parent),
    ui(new Ui::Bet)
{
    ui->setupUi(this);

    this->resize(200, 60);
}

Bet::~Bet()
{
    delete ui;
}
