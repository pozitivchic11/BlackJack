#include "mainmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent) : QDialog(parent),ui(new Ui::MainMenu)
{
    ui->setupUi(this);
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_startButton_clicked()
{
    Game* gameWin = new Game();

    this->hide();

    gameWin->show();
}


void MainMenu::on_exitButton_clicked()
{
    this->close();
}

