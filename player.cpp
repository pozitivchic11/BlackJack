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

void Player::setCardsDeck(const QList<QPixmap> cardsDeck_)
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
int People::getIndex() { return ind; }

void People::hitCard()
{
    int ind = QRandomGenerator::global()->bounded(cardsDeck->size());

    this->ind = ind;

    card = new QPixmap(cardsDeck->at(ind));

    cardsDeck->remove(ind, 1);
}

void People::stand() {}

Computer::Computer() {}

void Computer::hitCard()
{

}

void Computer::stand() {}
