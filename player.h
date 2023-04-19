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
    virtual int getIndex() = 0;
    virtual QPixmap* getCard() = 0;

    static void setCardsDeck(const QList<QPixmap> cardsDeck_);

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

    int getIndex() override;

    QPixmap* getCard() override;

private:
    QPixmap* card;

    int ind;
};

class Computer : public Player
{
public:
    Computer();
    ~Computer();

    void hitCard() override;
    void stand() override;

    int getIndex() override;

    QPixmap* getCard() override;

private:
    QPixmap* card;

    int ind;
};

#endif // PLAYER_H
