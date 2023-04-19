#include "bet.h"
#include "ui_betwindow.h"
#include "game.h"

Bet::Bet(QWidget *parent) : QDialog(parent),ui(new Ui::Bet)
{
    ui->setupUi(this);

    clickSound.setSource(QUrl::fromLocalFile(QDir::currentPath() + "/sounds/choose_chip_button_click.wav"));
    clickSound.setVolume(static_cast<float>(0.9));

    ui->pushButton_chip5->setIcon(QIcon(QDir::currentPath() + "/images/pokerChips/chip_5.jpg"));
    ui->pushButton_chip10->setIcon(QIcon(QDir::currentPath() + "/images/pokerChips/chip_10.jpg"));
    ui->pushButton_chip25->setIcon(QIcon(QDir::currentPath() + "/images/pokerChips/chip_25.png"));
    ui->pushButton_chip50->setIcon(QIcon(QDir::currentPath() + "/images/pokerChips/chip_50.png"));
    ui->pushButton_chip100->setIcon(QIcon(QDir::currentPath() + "/images/pokerChips/chip_100.png"));
    ui->pushButton_chip500->setIcon(QIcon(QDir::currentPath() + "/images/pokerChips/chip_500.png"));

    ui->pushButton_chip5->setIconSize(QSize(50, 50));
    ui->pushButton_chip10->setIconSize(QSize(55, 55));
    ui->pushButton_chip25->setIconSize(QSize(60, 60));
    ui->pushButton_chip50->setIconSize(QSize(75, 75));
    ui->pushButton_chip100->setIconSize(QSize(85, 85));
    ui->pushButton_chip500->setIconSize(QSize(50, 50));

    connect(ui->pushButton_chip5, &QPushButton::clicked, this, &Bet::onChipButton1);
    connect(ui->pushButton_chip10, &QPushButton::clicked, this, &Bet::onChipButton2);
    connect(ui->pushButton_chip25, &QPushButton::clicked, this, &Bet::onChipButton3);
    connect(ui->pushButton_chip50, &QPushButton::clicked, this, &Bet::onChipButton4);
    connect(ui->pushButton_chip100, &QPushButton::clicked, this, &Bet::onChipButton5);
    connect(ui->pushButton_chip500, &QPushButton::clicked, this, &Bet::onChipButton6);
}

Bet::~Bet()
{
    delete ui;
}

void Bet::onChipButton1()
{
    clickSound.play();
    current_chip = Chips::Chip_5;
    this->close();
}

void Bet::onChipButton2()
{
    clickSound.play();
    current_chip = Chips::Chip_10;
    this->close();
}

void Bet::onChipButton3()
{
    clickSound.play();
    current_chip = Chips::Chip_25;
    this->close();
}

void Bet::onChipButton4()
{
    clickSound.play();
    current_chip = Chips::Chip_50;
    this->close();
}

void Bet::onChipButton5()
{
    clickSound.play();
    current_chip = Chips::Chip_100;
    this->close();
}

void Bet::onChipButton6()
{
    clickSound.play();
    current_chip = Chips::Chip_500;
    this->close();
}

Chips Bet::getCurrentChip(){ return current_chip; }
