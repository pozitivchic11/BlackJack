#include "game.h"
#include "ui_gamewindow.h"

Game::Game(QWidget *parent) : QWidget(parent), ui(new Ui::Game)
{
    ui->setupUi(this);

    QPixmap pixmap_background("D:/Програмування/Projects/BlackJack/BlackJack/images/blackjack_table.jpg");
    QPalette palette;

    pixmap_background = pixmap_background.scaled(this->size());

    palette.setBrush(backgroundRole(), QBrush(pixmap_background));

    ui->decrementButton->setIcon(QIcon("D:/Програмування/Projects/BlackJack/BlackJack/images/icons/minus_Icon.png"));
    ui->incrementButton->setIcon(QIcon("D:/Програмування/Projects/BlackJack/BlackJack/images/icons/plus_Icon.png"));

    this->setPalette(palette);
    this->resize(800, 500);

    loadCardsDeck();
}

Game::~Game()
{
    delete ui;
}

void Game::loadCardsDeck()
{
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/2_of_clubs.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/2_of_diamonds.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/2_of_hearts.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/2_of_spades.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/3_of_clubs.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/3_of_diamonds.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/3_of_hearts.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/3_of_spades.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/4_of_clubs.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/4_of_diamonds.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/4_of_hearts.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/4_of_spades.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/5_of_clubs.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/5_of_diamonds.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/5_of_hearts.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/5_of_spades.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/6_of_clubs.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/6_of_diamonds.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/6_of_hearts.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/6_of_spades.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/7_of_clubs.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/7_of_diamonds.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/7_of_hearts.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/7_of_spades.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/8_of_clubs.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/8_of_diamonds.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/8_of_hearts.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/8_of_spades.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/9_of_clubs.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/9_of_diamonds.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/9_of_hearts.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/9_of_spades.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/10_of_clubs.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/10_of_diamonds.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/10_of_hearts.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/10_of_spades.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/ace_of_clubs.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/ace_of_diamonds.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/ace_of_hearts.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/ace_of_spades.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/jack_of_clubs2.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/jack_of_diamonds2.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/jack_of_hearts2.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/jack_of_spades2.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/king_of_clubs2.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/king_of_diamonds2.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/king_of_hearts2.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/king_of_spades2.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/queen_of_clubs2.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/queen_of_diamonds2.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/queen_of_hearts2.png"));
    cardsDeck.append(QPixmap("D:/Програмування/Projects/BlackJack/BlackJack/images/cards/queen_of_spades2.png"));
}
