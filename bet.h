#ifndef BET_H
#define BET_H

#include <QDialog>

namespace Ui {
class Bet;
}

class Bet : public QDialog
{
    Q_OBJECT

public:
    explicit Bet(QWidget *parent = nullptr);
    ~Bet();

private:
    Ui::Bet *ui;
};

#endif // BET_H
