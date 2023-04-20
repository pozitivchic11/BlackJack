/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *mainLabel;
    QVBoxLayout *verticalLayout;
    QPushButton *startButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *exitButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName("MainMenu");
        MainMenu->resize(400, 331);
        gridLayout = new QGridLayout(MainMenu);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        mainLabel = new QLabel(MainMenu);
        mainLabel->setObjectName("mainLabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("Script MT Bold")});
        font.setPointSize(26);
        mainLabel->setFont(font);
        mainLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        mainLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(mainLabel);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        startButton = new QPushButton(MainMenu);
        startButton->setObjectName("startButton");
        startButton->setMinimumSize(QSize(0, 45));
        QFont font1;
        font1.setPointSize(16);
        startButton->setFont(font1);

        verticalLayout->addWidget(startButton);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        exitButton = new QPushButton(MainMenu);
        exitButton->setObjectName("exitButton");
        exitButton->setMinimumSize(QSize(0, 45));
        exitButton->setFont(font1);

        verticalLayout->addWidget(exitButton);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QDialog *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "Dialog", nullptr));
        mainLabel->setText(QCoreApplication::translate("MainMenu", "BlackJack", nullptr));
        startButton->setText(QCoreApplication::translate("MainMenu", "Start game", nullptr));
        exitButton->setText(QCoreApplication::translate("MainMenu", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
