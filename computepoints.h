#ifndef COMPUTEPOINTS_H
#define COMPUTEPOINTS_H

class ComputePoints
{
public:
    ComputePoints();

    void setPoints(const int);

    bool checkBlackJack();
    bool checkPoints();

    int getPoints();

private:
    int points;

    bool operator <(const ComputePoints&);
    bool operator >(const ComputePoints&);
    bool operator ==(const ComputePoints&);

};

#endif // COMPUTEPOINTS_H
