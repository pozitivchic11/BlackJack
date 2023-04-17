#include "game.h"
#include "ui_gamewindow.h"

Game::Game(QWidget *parent) : QWidget(parent), ui(new Ui::Game)
{
    ui->setupUi(this);

    ui->pocketLineEdit->setEnabled(false);
    ui->startButton->setEnabled(false);
    ui->hitButton->setEnabled(false);
    ui->standButton->setEnabled(false);

    ui->chooseCard->addItem("BlueBg");
    ui->chooseCard->addItem("Standard");
    ui->chooseCard->addItem("Standard Red");
    ui->chooseCard->addItem("RedBg");

    ui->peoplePoints->setVisible(false);

    ui->chooseCard->setCurrentIndex(1);

    betWindow = new Bet();

    QPixmap pixmap_background(QDir::currentPath() + "/images/blackjack_table.jpg");
    QPalette palette;

    pixmap_background = pixmap_background.scaled(this->size());

    palette.setBrush(backgroundRole(), QBrush(pixmap_background));

    ui->cardLabel->setPixmap(QPixmap(QDir::currentPath() + "/images/backCardsView/secondVariant.jpg").scaled(90, 140));
    ui->decrementButton->setIcon(QIcon(QDir::currentPath() + "/images/icons/minus_Icon.png"));
    ui->incrementButton->setIcon(QIcon(QDir::currentPath() + "/images/icons/plus_Icon.png") );
    ui->pocketLineEdit->setText(QString::number(BUDGET) + "$");

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
    cardsDeck.clear();
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/2_of_clubs.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/2_of_diamonds.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/2_of_hearts.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/2_of_spades.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/3_of_clubs.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/3_of_diamonds.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/3_of_hearts.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/3_of_spades.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/4_of_clubs.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/4_of_diamonds.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/4_of_hearts.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/4_of_spades.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/5_of_clubs.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/5_of_diamonds.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/5_of_hearts.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/5_of_spades.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/6_of_clubs.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/6_of_diamonds.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/6_of_hearts.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/6_of_spades.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/7_of_clubs.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/7_of_diamonds.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/7_of_hearts.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/7_of_spades.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/8_of_clubs.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/8_of_diamonds.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/8_of_hearts.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/8_of_spades.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/9_of_clubs.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/9_of_diamonds.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/9_of_hearts.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/9_of_spades.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/10_of_clubs.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/10_of_diamonds.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/10_of_hearts.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/10_of_spades.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/jack_of_clubs2.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/jack_of_diamonds2.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/jack_of_hearts2.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/jack_of_spades2.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/king_of_clubs2.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/king_of_diamonds2.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/king_of_hearts2.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/king_of_spades2.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/queen_of_clubs2.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/queen_of_diamonds2.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/queen_of_hearts2.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/queen_of_spades2.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/ace_of_clubs.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/ace_of_diamonds.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/ace_of_hearts.png"));
    cardsDeck.append(QPixmap(QDir::currentPath() + "/images/cards/ace_of_spades.png"));
}

void Game::on_chooseBetButton_clicked()
{
    betWindow->setModal(true);
    betWindow->exec();
}

void Game::on_betButton_clicked()
{
    int reply;

    if(BET != 0) {
        reply = QMessageBox::question(this, "Bet", "Are you sure you wanna bet " + ui->chooseBetButton->text() + "?", QMessageBox::Yes | QMessageBox::No);
    }
    else {
        QMessageBox::information(this, "Bet", "Choose your chip to bet by clicking at the button above button 'Bet'");
    }

    if(reply == QMessageBox::Yes){
        if(BET <= BUDGET){
            BUDGET -= BET;
            BET = 0;

            ui->pocketLineEdit->setText(QString::number(BUDGET) + "$");
            ui->chooseBetButton->setText(QString::number(BET) + "$");

            ui->betButton->setEnabled(false);
            ui->chooseBetButton->setEnabled(false);
            ui->incrementButton->setEnabled(false);
            ui->decrementButton->setEnabled(false);

            ui->startButton->setEnabled(true);
        }
        else {
            QMessageBox::information(this, "Bet", "You have insufficient funds to bet! Reduce your bet.");
        }
    }
}

void Game::on_incrementButton_clicked()
{
    int temp;

    if(betWindow->getCurrentChip() != Chips::NONE){
    switch(betWindow->getCurrentChip())
        {
        case Chips::Chip_5:
            temp = (BUDGET - 5) > 0 ? 5 : BUDGET;
            (temp < 5) ? BUDGET = 0 : BUDGET;
            break;
        case Chips::Chip_10:
            temp = (BUDGET - 10) > 0 ? 10 : BUDGET;
            (temp < 10) ? BUDGET = 0 : BUDGET;
            break;
        case Chips::Chip_25:
            temp = (BUDGET - 25) > 0 ? 25 : BUDGET;
            (temp < 25) ? BUDGET = 0 : BUDGET;
            break;
        case Chips::Chip_50:
            temp = (BUDGET - 50) > 0 ? 50 : BUDGET;
            (temp < 50) ? BUDGET = 0 : BUDGET;
            break;
        case Chips::Chip_100:
            temp = (BUDGET - 100) > 0 ? 100 : BUDGET;
            (temp < 100) ? BUDGET = 0 : BUDGET;
            break;
        case Chips::Chip_500:
            temp = (BUDGET - 500) > 0 ? 500 : BUDGET;
            (temp < 500) ? BUDGET = 0 : BUDGET;
            break;
        }

        BET += temp;
        ui->chooseBetButton->setText(QString::number(BET) + "$");
    }
    else { QMessageBox::information(this, "Bet", "Choose your chip!"); }
}

void Game::on_decrementButton_clicked()
{
    int temp;

    if(betWindow->getCurrentChip() != Chips::NONE){
        switch(betWindow->getCurrentChip())
        {
        case Chips::Chip_5:
            temp = (BUDGET - 5) > 0 ? 5 : BUDGET;
            (temp < 5) ? BUDGET = 0 : BUDGET;
            break;
        case Chips::Chip_10:
            temp = (BUDGET - 10) > 0 ? 10 : BUDGET;
            (temp < 10) ? BUDGET = 0 : BUDGET;
            break;
        case Chips::Chip_25:
            temp = (BUDGET - 25) > 0 ? 25 : BUDGET;
            (temp < 25) ? BUDGET = 0 : BUDGET;
            break;
        case Chips::Chip_50:
            temp = (BUDGET - 50) > 0 ? 50 : BUDGET;
            (temp < 50) ? BUDGET = 0 : BUDGET;
            break;
        case Chips::Chip_100:
            temp = (BUDGET - 100) > 0 ? 100 : BUDGET;
            (temp < 100) ? BUDGET = 0 : BUDGET;
            break;
        case Chips::Chip_500:
            temp = (BUDGET - 500) > 0 ? 500 : BUDGET;
            (temp < 500) ? BUDGET = 0 : BUDGET;
            break;
        }

        if((BET - temp) >= 0) { BET -= temp; }
        ui->chooseBetButton->setText(QString::number(BET) + "$");
    }
    else { QMessageBox::information(this, "Bet", "Choose your chip!"); }
}

void Game::on_chooseCard_currentIndexChanged(int index)
{
    ui->cardLabel->setPixmap(QPixmap(QDir::currentPath() + "/images/backCardsView/" + cardsBackgroundList[index]).scaled(90, 140));
}

void Game::countPoints(const int it, const QString checkPerson)
{
    int count = 0;

    if((it >= 0) and (it < 4))
    {
        count += 2;
    }
    else if((it >= 4) and (it < 8))
    {
        count += 3;
    }
    else if((it >= 8) and (it < 12))
    {
        count += 4;
    }
    else if((it >= 12) and (it < 16))
    {
        count += 5;
    }
    else if((it >= 16) and (it < 20))
    {
        count += 6;
    }
    else if((it >= 20) and (it < 24))
    {
        count += 7;
    }
    else if((it >= 24) and (it < 28))
    {
        count += 8;
    }
    else if((it >= 28) and (it < 32))
    {
        count += 9;
    }
    else if((it >= 32) and (it < 50))
    {
        count += 10;
    }
    else
    {
        if(checkPerson == "Person"){
            if(peopleCountPoints <= 11)
            {
                count += 10;
            }
            else
            {
                count += 1;
            }
        }
        else{
            if(computerCountPoints <= 11)
            {
                count += 10;
            }
            else
            {
                count += 1;
            }
        }
    }

    if(checkPerson == "People")
    {
        peopleCountPoints += count;
    }
    else
    {
        computerCountPoints += count;
    }
}

void Game::on_startButton_clicked()
{
    game_state_button_clicked = true;

    temp_pCARDS_POS_X = pCARDS_POS_X;
    temp_cCARDS_POS_X = cCARDS_POS_X;

    Player::setCardsDeck(cardsDeck);

    temp_cardsDeck.clear();

    for(auto el : cardsDeck)
    {
        temp_cardsDeck.append(el);
    }

    for(int i = 0; i < 2; i++) {
        int ind = QRandomGenerator::global()->bounded(temp_cardsDeck.size());

        temp_pCARDS_POS_X += 15;

        peopleCardsCoords.append(QPair<int, int>(temp_pCARDS_POS_X, CARDS_POS_Y));
        pPrimaryPos.append(QPair<int, int>(0, 0));
        cPrimaryPos.append(QPair<int, int>(0, 0));

        temp_peopleCardsDeck.append(temp_cardsDeck[ind]);
        countPoints(ind, "People");
        temp_cardsDeck.remove(ind, 1);

        ind = QRandomGenerator::global()->bounded(temp_cardsDeck.size());

        temp_cCARDS_POS_X += 15;

        computerCardsCoords.append(QPair<int, int>(temp_cCARDS_POS_X, CARDS_POS_Y));

        temp_computerCardsDeck.append(temp_cardsDeck[ind]);
        countPoints(ind, "Computer");
        temp_cardsDeck.remove(ind, 1);
    }

    ui->startButton->setEnabled(false);
    ui->hitButton->setEnabled(true);
    ui->standButton->setEnabled(true);

    ui->betButton->setText(QString::number(peopleCountPoints));
    ui->startButton->setText(QString::number(computerCountPoints));

    ui->peoplePoints->setVisible(true);
    ui->peoplePoints->setText(QString::number(peopleCountPoints));

    update();
}

void Game::on_hitButton_clicked()
{
    game_state_button_clicked = true;

    People* people = new People();

    people->hitCard();

    temp_pCARDS_POS_X += 15;

    peopleCardsCoords.append(QPair<int, int>(temp_pCARDS_POS_X, CARDS_POS_Y));
    countPoints(people->getIndex(), "People");
    temp_peopleCardsDeck.append(*people->getCard());

    ui->peoplePoints->setText(QString::number(peopleCountPoints));

    repaint();
}

void Game::paintEvent(QPaintEvent* event)
{
    Q_UNUSED(event);
    QPainter painter(this);

    if(game_state_button_clicked)
    {
        for(cards_people_iter = 0; cards_people_iter < temp_peopleCardsDeck.size(); cards_people_iter++)
        {
            painter.drawPixmap(peopleCardsCoords[cards_people_iter].first, peopleCardsCoords[cards_people_iter].second, QPixmap(temp_peopleCardsDeck[cards_people_iter]).scaled(52, 88));
        }

        for(cards_computer_iter = 0; cards_computer_iter < temp_computerCardsDeck.size(); cards_computer_iter++)
        {
            painter.drawPixmap(computerCardsCoords[cards_computer_iter].first, computerCardsCoords[cards_computer_iter].second, QPixmap(temp_computerCardsDeck[cards_computer_iter]).scaled(52, 88));
        }
    }
}

void Game::timerEvent(QTimerEvent *event)
{
    Q_UNUSED(event);
}

int Game::temp_pCARDS_POS_X = NULL;
int Game::temp_cCARDS_POS_X = NULL;
int Game::BUDGET = 1000;
int Game::BET = 0;
