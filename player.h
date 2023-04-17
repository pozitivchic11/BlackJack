#ifndef PLAYER_H
#define PLAYER_H

#include <QList>
#include <QPixmap>

class Player
{
public:
    Player();
    ~Player();

    virtual void hitCard() = 0;
    virtual void stand() = 0;

    static void setCardsDeck(QList<QPixmap> cardsDeck_);

protected:
    static QList<QPixmap>* cardsDeck;
};

class People : public Player
{
public:
    People();
    ~People();

    void hitCard() override;
    void stand() override;

    QPixmap* getCard();

private:
    QPixmap* card;
};

class Computer : public Player
{
public:
    Computer();
    ~Computer();

    void hitCard() override;
    void stand() override;
};

#endif // PLAYER_H
