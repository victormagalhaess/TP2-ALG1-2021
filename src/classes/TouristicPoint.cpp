#include "../include/TouristicPoint.hpp"
using namespace std;

TouristicPoint::TouristicPoint(int interestPointNumber, int touristicValue)
{
    this->interestPointNumber = interestPointNumber;
    this->touristicValue = touristicValue;
}

TouristicPoint::TouristicPoint()
{
    this->interestPointNumber = -1;
    this->touristicValue = 0;
}

TouristicPoint::~TouristicPoint() {}

void TouristicPoint::setInterestPointNumber(int interestPointNumber)
{
    this->interestPointNumber = interestPointNumber;
}

void TouristicPoint::setTouristicValue(int touristicValue)
{
    this->touristicValue = touristicValue;
}

int TouristicPoint::getInterestPointNumber()
{
    return this->interestPointNumber;
}

int TouristicPoint::getTouristicValue()
{
    return this->touristicValue;
}