#include "player.h"
#include "game.h"

QList<QPixmap>* Player::cardsDeck = new QList<QPixmap>();

Player::Player() {}

Player::~Player()
{
    if (cardsDeck != nullptr) {
        delete cardsDeck;
        cardsDeck = nullptr;
    }
}

void Player::setCardsDeck(QList<QPixmap> cardsDeck_)
{
    *cardsDeck = cardsDeck_;
}

People::People() {}

People::~People() {
    if(card != nullptr) {
        delete card;
        card = nullptr;
    }
}

QPixmap* People::getCard() { return card; }

void People::hitCard()
{
    int ind = QRandomGenerator::global()->bounded(cardsDeck->size());

    card = new QPixmap(cardsDeck->at(ind));

    cardsDeck->remove(ind, 1);
}

void People::stand()
{

}
