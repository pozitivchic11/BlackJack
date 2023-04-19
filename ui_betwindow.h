/********************************************************************************
** Form generated from reading UI file 'betwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BETWINDOW_H
#define UI_BETWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Bet
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_chip5;
    QPushButton *pushButton_chip10;
    QPushButton *pushButton_chip25;
    QPushButton *pushButton_chip50;
    QPushButton *pushButton_chip100;
    QPushButton *pushButton_chip500;

    void setupUi(QDialog *Bet)
    {
        if (Bet->objectName().isEmpty())
            Bet->setObjectName("Bet");
        Bet->setWindowModality(Qt::NonModal);
        Bet->resize(360, 183);
        gridLayout = new QGridLayout(Bet);
        gridLayout->setObjectName("gridLayout");
        pushButton_chip5 = new QPushButton(Bet);
        pushButton_chip5->setObjectName("pushButton_chip5");
        pushButton_chip5->setMinimumSize(QSize(110, 80));
        pushButton_chip5->setSizeIncrement(QSize(5, 5));
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/pokerChips/chip_5.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_chip5->setIcon(icon);
        pushButton_chip5->setIconSize(QSize(80, 60));

        gridLayout->addWidget(pushButton_chip5, 0, 0, 1, 1);

        pushButton_chip10 = new QPushButton(Bet);
        pushButton_chip10->setObjectName("pushButton_chip10");
        pushButton_chip10->setMinimumSize(QSize(110, 80));
        pushButton_chip10->setSizeIncrement(QSize(5, 5));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("images/pokerChips/chip_10.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_chip10->setIcon(icon1);
        pushButton_chip10->setIconSize(QSize(80, 60));

        gridLayout->addWidget(pushButton_chip10, 0, 1, 1, 1);

        pushButton_chip25 = new QPushButton(Bet);
        pushButton_chip25->setObjectName("pushButton_chip25");
        pushButton_chip25->setMinimumSize(QSize(110, 80));
        pushButton_chip25->setSizeIncrement(QSize(5, 5));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("images/pokerChips/chip_25.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_chip25->setIcon(icon2);
        pushButton_chip25->setIconSize(QSize(80, 60));

        gridLayout->addWidget(pushButton_chip25, 0, 2, 1, 1);

        pushButton_chip50 = new QPushButton(Bet);
        pushButton_chip50->setObjectName("pushButton_chip50");
        pushButton_chip50->setMinimumSize(QSize(110, 80));
        pushButton_chip50->setSizeIncrement(QSize(5, 5));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("images/pokerChips/chip_50.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_chip50->setIcon(icon3);
        pushButton_chip50->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton_chip50, 1, 0, 1, 1);

        pushButton_chip100 = new QPushButton(Bet);
        pushButton_chip100->setObjectName("pushButton_chip100");
        pushButton_chip100->setMinimumSize(QSize(110, 80));
        pushButton_chip100->setSizeIncrement(QSize(5, 5));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("images/pokerChips/chip_100.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_chip100->setIcon(icon4);
        pushButton_chip100->setIconSize(QSize(80, 60));

        gridLayout->addWidget(pushButton_chip100, 1, 1, 1, 1);

        pushButton_chip500 = new QPushButton(Bet);
        pushButton_chip500->setObjectName("pushButton_chip500");
        pushButton_chip500->setMinimumSize(QSize(110, 80));
        pushButton_chip500->setSizeIncrement(QSize(5, 5));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("images/pokerChips/chip_500.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_chip500->setIcon(icon5);
        pushButton_chip500->setIconSize(QSize(80, 60));

        gridLayout->addWidget(pushButton_chip500, 1, 2, 1, 1);


        retranslateUi(Bet);

        QMetaObject::connectSlotsByName(Bet);
    } // setupUi

    void retranslateUi(QDialog *Bet)
    {
        Bet->setWindowTitle(QCoreApplication::translate("Bet", "Dialog", nullptr));
        pushButton_chip5->setText(QString());
        pushButton_chip10->setText(QString());
        pushButton_chip25->setText(QString());
        pushButton_chip50->setText(QString());
        pushButton_chip100->setText(QString());
        pushButton_chip500->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Bet: public Ui_Bet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BETWINDOW_H
