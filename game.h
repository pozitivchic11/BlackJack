#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QListView>
#include <QRandomGenerator>
#include <QPainter>
#include <QPair>
#include <QTimer>
#include <QDebug>

#include "bet.h"
#include "player.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Game; }
QT_END_NAMESPACE

class Game : public QWidget

{
    Q_OBJECT

public:
    Game(QWidget *parent = nullptr);
    ~Game();

protected:
    void paintEvent(QPaintEvent*) override;
    void timerEvent(QTimerEvent*) override;

private slots:
    void on_chooseBetButton_clicked();

    void on_betButton_clicked();

    void on_incrementButton_clicked();

    void on_decrementButton_clicked();

    void on_chooseCard_currentIndexChanged(int index);

    void on_startButton_clicked();

    void on_hitButton_clicked();

private:
    Ui::Game *ui;

    bool game_state_button_clicked = false;

    int cards_people_iter = 0;
    int cards_computer_iter = 0;

    int peopleCountPoints = 0;
    int computerCountPoints = 0;

    const int pCARDS_POS_X = 240;
    const int cCARDS_POS_X = 450;
    const int CARDS_POS_Y = 180;

    static int temp_pCARDS_POS_X;
    static int temp_cCARDS_POS_X;
    static int BUDGET;
    static int BET;

    QList<QString> cardsBackgroundList = { "firstVariant", "secondVariant.jpg", "thirdVariant.png", "fourthVariant.png" };

    QList<QPixmap> cardsDeck;

    QList<QPixmap> temp_cardsDeck;
    QList<QPixmap> temp_peopleCardsDeck;
    QList<QPixmap> temp_computerCardsDeck;

    QList<QPair<int, int>> peopleCardsCoords;
    QList<QPair<int, int>> computerCardsCoords;

    QList<QPair<int, int>> pPrimaryPos;
    QList<QPair<int, int>> cPrimaryPos;

    Bet* betWindow;

    void loadCardsDeck();

    int x = 0, y = 0;

    void countPoints(const int, const QString);

    bool checkHitButtonState();
};

#endif // GAME_H
