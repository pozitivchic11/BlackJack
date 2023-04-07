#ifndef GAME_H
#define GAME_H

#include <QWidget>

#include "bet.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Game; }
QT_END_NAMESPACE

class Game : public QWidget

{
    Q_OBJECT

public:
    Game(QWidget *parent = nullptr);
    ~Game();

private:
    Ui::Game *ui;

    QList<QPixmap> cardsDeck;

    void loadCardsDeck();
};

#endif // GAME_H
