#ifndef BET_H
#define BET_H

#include <QDialog>
#include <QGridLayout>
#include <QPushButton>
#include <QSize>
#include <QMessageBox>
#include <QDir>

enum Chips{
    Chip_5,
    Chip_10,
    Chip_25,
    Chip_50,
    Chip_100,
    Chip_500,
    NONE
};

namespace Ui {
class Bet;
}

class Bet : public QDialog
{
    Q_OBJECT

public:
    explicit Bet(QWidget *parent = nullptr);
    ~Bet();

    Chips getCurrentChip();

private slots:
    void onChipButton1();
    void onChipButton2();
    void onChipButton3();
    void onChipButton4();
    void onChipButton5();
    void onChipButton6();

private:
    Ui::Bet *ui;

    Chips current_chip = NONE;
};

#endif // BET_H
