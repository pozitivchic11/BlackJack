#include "computepoints.h"

ComputePoints::ComputePoints() {}

void ComputePoints::setPoints(const int points_)
{
    points = points_;
}

bool ComputePoints::checkBlackJack() { return points == 21; }

bool ComputePoints::checkPoints() { return points > 21; }

int ComputePoints::getPoints() { return points; }

bool ComputePoints::operator <(const ComputePoints& other) { return (this->points < other.points); }

bool ComputePoints::operator >(const ComputePoints& other) { return (this->points > other.points); }

bool ComputePoints::operator ==(const ComputePoints& other) { return (this->points == other.points); }
