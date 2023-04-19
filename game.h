#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QListView>
#include <QRandomGenerator>
#include <QPainter>
#include <QPair>
#include <QDebug>
#include <chrono>
#include <thread>
#include <QSoundEffect>
#include <QUrl>

#include "bet.h"
#include "player.h"
#include "computepoints.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Game; }
QT_END_NAMESPACE

enum class GameResult
{
    None,
    PeopleVictory,
    ComputerVictory,
    Draw
};

class Game : public QWidget

{
    Q_OBJECT

public:
    Game(QWidget *parent = nullptr);
    ~Game();

    static int getPeoplePoints();
    static int getComputerPoints();

protected:
    void paintEvent(QPaintEvent*) override;

private slots:
    void on_chooseBetButton_clicked();

    void on_betButton_clicked();

    void on_incrementButton_clicked();

    void on_decrementButton_clicked();

    void on_chooseCard_currentIndexChanged(int index);

    void on_startButton_clicked();

    void on_hitButton_clicked();

    void on_standButton_clicked();

private:
    Ui::Game *ui;

    bool game_state_button_clicked = false;
    bool game_finished = false;
    bool bot_hit = false;

    int card_bg_ind = 1;

    int temp_pCARDS_POS_X;
    int temp_cCARDS_POS_X;

    int temp_bet;

    int cards_people_iter = 0;
    int cards_computer_iter = 0;

    const int pCARDS_POS_X = 240;
    const int cCARDS_POS_X = 450;
    const int CARDS_POS_Y = 180;

    static int BUDGET;
    static int BET;
    static int peopleCountPoints;
    static int computerCountPoints;

    GameResult game_result;

    QList<int> peopleEleven;
    QList<int> computerEleven;

    QList<QString> cardsBackgroundList = { "firstVariant", "secondVariant.jpg", "thirdVariant.png", "fourthVariant.png" };

    QList<QPixmap> cardsDeck;

    QList<QPixmap> temp_cardsDeck;
    QList<QPixmap> temp_peopleCardsDeck;
    QList<QPixmap> temp_computerCardsDeck;

    QList<QPair<int, int>> peopleCardsCoords;
    QList<QPair<int, int>> computerCardsCoords;

    QSoundEffect clickSound;

    Bet* betWindow;

    Computer* computer;

    ComputePoints* peoplePoints;
    ComputePoints* computerPoints;

    int x = 0, y = 0;

    void loadCardsDeck();
    void checkGameResult();
    void restartGame();
    void countPoints(const int, const QString);

    bool checkHitButtonState();
};

#endif // GAME_H
