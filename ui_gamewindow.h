/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QLabel *gameLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *betButton;
    QPushButton *startButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *backToMenuButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *hitButton;
    QPushButton *standButton;
    QPushButton *chooseBetButton;
    QPushButton *incrementButton;
    QPushButton *decrementButton;
    QLineEdit *pocketLineEdit;
    QLabel *cardLabel;
    QComboBox *chooseCard;
    QLabel *labelDiscCards;
    QLineEdit *peoplePoints;
    QLineEdit *computerPoints;

    void setupUi(QWidget *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName("Game");
        Game->resize(800, 500);
        Game->setMinimumSize(QSize(800, 500));
        Game->setMaximumSize(QSize(800, 500));
        Game->setAutoFillBackground(false);
        gameLabel = new QLabel(Game);
        gameLabel->setObjectName("gameLabel");
        gameLabel->setGeometry(QRect(300, 15, 250, 70));
        QFont font;
        font.setFamilies({QString::fromUtf8("Script MT Bold")});
        font.setPointSize(30);
        gameLabel->setFont(font);
        gameLabel->setStyleSheet(QString::fromUtf8("color: rgb(189, 255, 174);"));
        layoutWidget = new QWidget(Game);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 420, 721, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        betButton = new QPushButton(layoutWidget);
        betButton->setObjectName("betButton");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(14);
        betButton->setFont(font1);

        horizontalLayout->addWidget(betButton);

        startButton = new QPushButton(layoutWidget);
        startButton->setObjectName("startButton");
        startButton->setFont(font1);

        horizontalLayout->addWidget(startButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        backToMenuButton = new QPushButton(layoutWidget);
        backToMenuButton->setObjectName("backToMenuButton");
        backToMenuButton->setFont(font1);

        horizontalLayout->addWidget(backToMenuButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        hitButton = new QPushButton(layoutWidget);
        hitButton->setObjectName("hitButton");
        hitButton->setFont(font1);

        horizontalLayout->addWidget(hitButton);

        standButton = new QPushButton(layoutWidget);
        standButton->setObjectName("standButton");
        standButton->setFont(font1);

        horizontalLayout->addWidget(standButton);

        chooseBetButton = new QPushButton(Game);
        chooseBetButton->setObjectName("chooseBetButton");
        chooseBetButton->setGeometry(QRect(55, 340, 70, 60));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font2.setPointSize(12);
        chooseBetButton->setFont(font2);
        chooseBetButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        incrementButton = new QPushButton(Game);
        incrementButton->setObjectName("incrementButton");
        incrementButton->setGeometry(QRect(130, 355, 30, 30));
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/icons/plus_Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        incrementButton->setIcon(icon);
        decrementButton = new QPushButton(Game);
        decrementButton->setObjectName("decrementButton");
        decrementButton->setGeometry(QRect(20, 355, 30, 30));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("images/icons/minus_Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        decrementButton->setIcon(icon1);
        pocketLineEdit = new QLineEdit(Game);
        pocketLineEdit->setObjectName("pocketLineEdit");
        pocketLineEdit->setGeometry(QRect(60, 305, 61, 28));
        pocketLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"border-color: rgb(104, 88, 26);\n"
"font: 10pt \"Stencil\";"));
        pocketLineEdit->setAlignment(Qt::AlignCenter);
        cardLabel = new QLabel(Game);
        cardLabel->setObjectName("cardLabel");
        cardLabel->setGeometry(QRect(690, 100, 90, 140));
        chooseCard = new QComboBox(Game);
        chooseCard->setObjectName("chooseCard");
        chooseCard->setGeometry(QRect(690, 380, 82, 28));
        labelDiscCards = new QLabel(Game);
        labelDiscCards->setObjectName("labelDiscCards");
        labelDiscCards->setGeometry(QRect(610, 385, 81, 20));
        QFont font3;
        font3.setBold(true);
        labelDiscCards->setFont(font3);
        labelDiscCards->setToolTipDuration(-5);
        labelDiscCards->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        labelDiscCards->setAlignment(Qt::AlignCenter);
        peoplePoints = new QLineEdit(Game);
        peoplePoints->setObjectName("peoplePoints");
        peoplePoints->setEnabled(true);
        peoplePoints->setGeometry(QRect(230, 140, 40, 25));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Rockwell Extra Bold")});
        peoplePoints->setFont(font4);
        peoplePoints->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        computerPoints = new QLineEdit(Game);
        computerPoints->setObjectName("computerPoints");
        computerPoints->setGeometry(QRect(440, 140, 40, 25));

        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QWidget *Game)
    {
        Game->setWindowTitle(QCoreApplication::translate("Game", "Game", nullptr));
        gameLabel->setText(QCoreApplication::translate("Game", "  BlackJack", nullptr));
        betButton->setText(QCoreApplication::translate("Game", "Bet", nullptr));
        startButton->setText(QCoreApplication::translate("Game", "Start", nullptr));
        backToMenuButton->setText(QCoreApplication::translate("Game", "Back To Menu", nullptr));
        hitButton->setText(QCoreApplication::translate("Game", "Hit", nullptr));
        standButton->setText(QCoreApplication::translate("Game", "Stand", nullptr));
        chooseBetButton->setText(QCoreApplication::translate("Game", "0$", nullptr));
        incrementButton->setText(QString());
        decrementButton->setText(QString());
        cardLabel->setText(QString());
        labelDiscCards->setText(QCoreApplication::translate("Game", "Cards Skin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
